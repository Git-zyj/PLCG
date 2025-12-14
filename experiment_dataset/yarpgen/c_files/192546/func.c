/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192546
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((-1LL) != (((/* implicit */long long int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = arr_0 [i_3];
                                var_12 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)13568)) % (((/* implicit */int) (short)17666)))))));
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((arr_0 [i_0]) - (((/* implicit */int) ((arr_7 [i_1 - 3] [i_1] [i_1] [i_1]) > (((/* implicit */long long int) (+(1581118548)))))))));
                                var_13 = (~(((((/* implicit */long long int) ((/* implicit */int) (short)-17666))) ^ (4LL))));
                                arr_12 [i_3] [i_1] [i_1] [i_3] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((1170991036) << (((((((arr_0 [i_2]) ^ (((/* implicit */int) arr_5 [i_0])))) | ((~(-1591852612))))) - (1609678403)))))) : (((/* implicit */unsigned int) ((1170991036) << (((((((((arr_0 [i_2]) ^ (((/* implicit */int) arr_5 [i_0])))) | ((~(-1591852612))))) - (1609678403))) - (40))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1]))) < (((arr_7 [i_0] [i_1] [i_1] [i_2]) << (((((/* implicit */int) arr_1 [(unsigned char)6])) - (21919)))))))) << (((arr_0 [i_1]) - (454141584)))));
                    var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((arr_7 [i_0] [i_0] [i_1] [i_2]) - (((/* implicit */long long int) arr_0 [i_1])))))))));
                    var_16 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((arr_14 [i_5] [i_5]) - (arr_14 [i_5] [i_5]))) > (((/* implicit */int) arr_13 [i_5] [i_5]))));
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_5] [i_5])) | (((((/* implicit */long long int) ((/* implicit */int) (short)-27401))) & (-6927272053499221618LL)))));
        arr_15 [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]);
        arr_16 [i_5] = 4LL;
    }
    var_19 = ((/* implicit */unsigned char) (short)10679);
}
