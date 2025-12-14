/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210955
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9719556982247695350ULL))))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = (+(((((/* implicit */int) (unsigned char)30)) / (var_2))));
                                var_14 = ((/* implicit */unsigned char) var_2);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_11 [i_1] [(short)2] [i_3] [7]) : (arr_11 [i_2] [i_4] [i_3] [i_3])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((var_2) | (((/* implicit */int) (unsigned char)255)))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))) ? (max((((/* implicit */int) (unsigned short)16383)), ((+(((/* implicit */int) (unsigned short)4088)))))) : ((~((~(((/* implicit */int) (unsigned short)56273))))))));
}
