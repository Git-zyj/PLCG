/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22416
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = var_4;
    var_11 = ((/* implicit */_Bool) ((((562948879679488LL) - (((/* implicit */long long int) (+(var_9)))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_7)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [4U] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) + (arr_6 [(unsigned short)7] [i_1] [i_3] [i_2])));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned short)1]))));
                        }
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        var_14 = ((var_4) << (((((arr_1 [i_0]) + (3940298016810822893LL))) - (19LL))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8))));
                        arr_17 [i_5 + 1] [2LL] [i_1] [i_1] [2LL] [i_0] |= (_Bool)0;
                    }
                    arr_18 [i_0] [i_2] = ((/* implicit */unsigned int) min(((_Bool)0), (((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) var_6)))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((short)-20193), ((short)-32653)))))) >= (((/* implicit */int) (_Bool)0))));
                    arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_2))));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) ((_Bool) var_6))))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_6))));
                    arr_25 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)65535))) + (((/* implicit */int) var_8))))), (var_4));
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51572))))) : (max((((/* implicit */long long int) var_2)), (9063281712046627844LL)))));
                }
                arr_27 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ? (14989725542528014341ULL) : (((/* implicit */unsigned long long int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57825)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20195)))))));
                var_19 = ((/* implicit */unsigned short) ((unsigned int) min((var_7), ((_Bool)1))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    var_20 = ((/* implicit */long long int) min((((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_8])) - (((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_6))))));
                    arr_30 [i_0] [(_Bool)0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (unsigned short)50457)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)77))))), (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(((unsigned long long int) var_6))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
}
