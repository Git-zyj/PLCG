/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233249
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_11 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
    }
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~((~(-2147483641))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        for (short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1073741823)) : (258988597871502181ULL))) << (((((((/* implicit */_Bool) 258988597871502188ULL)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) var_2)))) + (8238)))));
                    var_14 += ((/* implicit */long long int) (_Bool)1);
                    arr_12 [i_1] [i_2] [1ULL] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_15 [i_1 - 1] [i_1 - 1] [i_4] [i_2] = ((/* implicit */_Bool) arr_6 [i_4]);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [1] [i_2] [(signed char)3] [1] [i_2] [(signed char)3] = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483645))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)252))) : (4611123068473966592LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(3ULL))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46963))) % (18187755475838049451ULL))) : (((/* implicit */unsigned long long int) var_1))));
                        }
                    }
                    var_18 ^= ((/* implicit */_Bool) (unsigned short)18588);
                    var_19 = ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) == ((-(var_1))));
                }
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                                arr_27 [i_1] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */short) arr_10 [i_1] [4U] [i_1 + 2] [i_1]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)124))))));
                arr_28 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_2] [i_2 + 1])), (max((max((((/* implicit */long long int) (short)24942)), (6961978615470777996LL))), (((/* implicit */long long int) max((arr_8 [i_1] [i_1] [i_2]), (arr_20 [i_1] [i_2] [i_2] [i_2] [i_2]))))))));
            }
        } 
    } 
}
