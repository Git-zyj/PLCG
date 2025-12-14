/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31331
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_1 [i_1]));
                arr_5 [i_0] [i_1 + 4] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4])) ? (arr_3 [i_0] [i_1 + 4]) : (arr_3 [i_0] [i_1 + 3])))) < (arr_2 [i_0] [i_0] [i_1])));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
                arr_7 [i_1] = ((/* implicit */unsigned char) ((_Bool) (-(((((/* implicit */unsigned long long int) arr_0 [11U])) + (var_10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) 1855608251);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_14)))))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_5])) ? (arr_10 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (short)5721)) : (((/* implicit */int) max((arr_1 [(short)16]), (((/* implicit */short) (_Bool)1))))))))));
                            arr_21 [i_2] [i_2] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_2] [i_2]))));
                        }
                    } 
                } 
                arr_22 [(unsigned char)0] [(unsigned char)0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_3]), (((/* implicit */unsigned long long int) (short)5721))))) || ((!(((/* implicit */_Bool) arr_0 [i_2])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5721))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_6])) ? (((/* implicit */int) (short)5721)) : (arr_13 [i_2])))) : (((unsigned int) var_7))))) ? ((+(((((/* implicit */_Bool) 468628574)) ? (arr_19 [i_2] [i_3] [i_6] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_20 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_13 [8LL])))))))));
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_5);
                    arr_26 [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((min((arr_19 [i_2] [i_3] [i_6] [i_6]), (18228836066656530881ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_6] [i_2]))))) | (min((15919247366107482415ULL), (((/* implicit */unsigned long long int) arr_13 [i_2]))))));
                }
                var_17 = ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */int) (short)-5721)) | (arr_16 [i_2] [i_2] [i_2] [i_2]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)3);
    var_19 = (-((~(((/* implicit */int) ((unsigned short) -230725556))))));
    var_20 = ((/* implicit */long long int) var_8);
}
