/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193162
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) 0ULL);
        var_15 -= ((/* implicit */unsigned long long int) (unsigned char)62);
        var_16 *= ((/* implicit */unsigned long long int) 2805802610U);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [i_0])) > ((-(2147679397679460683ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) 1489164687U);
                    var_18 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    arr_9 [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned short) min((2097556138643296765ULL), (((/* implicit */unsigned long long int) 2805802595U)))))) ? (((/* implicit */unsigned long long int) (-((+(2805802605U)))))) : (2097556138643296765ULL));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [13U] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) arr_7 [i_0] [16ULL] [i_0] [i_0]);
                                arr_16 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [(unsigned char)17] [(unsigned char)17] [(unsigned char)17]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 134217664))) / ((+(((/* implicit */int) (unsigned short)15326)))))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_18 [i_5] [i_5]);
    }
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_14))));
}
