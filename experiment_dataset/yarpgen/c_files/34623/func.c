/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34623
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */_Bool) var_5);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 ^= (_Bool)1;
                                var_13 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)245)) : (((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) (unsigned short)65535))))))));
                                arr_11 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)23832)))))), (((/* implicit */int) max((((unsigned short) var_6)), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)0)), (var_4)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((var_0), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)1)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36145))))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-7362)))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */signed char) max((((((long long int) (short)-21112)) | (((/* implicit */long long int) max((((/* implicit */int) var_8)), (-1)))))), (((/* implicit */long long int) var_3))));
}
