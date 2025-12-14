/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198935
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
    var_19 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_14))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) var_18))) && (((/* implicit */_Bool) 17696163938646158578ULL)))) ? ((+(((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_17)))), (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_18)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)384))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (-1544994813199282048LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))) : (((/* implicit */long long int) var_7)))));
                        arr_14 [i_1] = ((((/* implicit */_Bool) var_9)) ? ((-(min((-1544994813199282048LL), (((/* implicit */long long int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */long long int) ((int) (signed char)30))) : ((-(var_13))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */unsigned int) var_7)) : (1073741824U))), (((/* implicit */unsigned int) (((-(-648635009216007124LL))) < (((long long int) var_17))))))))));
                    }
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) - ((+((-(var_9))))))))));
                    arr_15 [i_1] = ((_Bool) var_18);
                }
                arr_16 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(var_9)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18)))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_15))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                arr_23 [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_11))))));
                var_25 = ((unsigned short) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_17)), ((signed char)0))))) : (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2175314260U)))));
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (-1920447697))))));
            }
        } 
    } 
}
