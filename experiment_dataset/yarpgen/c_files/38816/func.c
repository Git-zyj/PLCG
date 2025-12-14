/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38816
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
    var_12 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */long long int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1112797168)) ? (var_3) : (((/* implicit */unsigned int) 669955983))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_8)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_14 = (i_0 % 2 == zero) ? (((((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_4])) ? (arr_6 [i_0] [i_0] [(unsigned short)19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) - (arr_9 [i_0 - 1] [i_0] [i_2]))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) -810134016))) * (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_3))))))))) : (((((((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_4])) ? (arr_6 [i_0] [i_0] [(unsigned short)19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) - (arr_9 [i_0 - 1] [i_0] [i_2]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) -810134016))) * (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_3)))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) % (((arr_1 [i_0 - 1]) % (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_10 [i_0] [i_2] [i_0] [i_4])), (var_3))))))));
                                var_15 = ((/* implicit */short) ((_Bool) min((((/* implicit */int) var_7)), (arr_10 [i_0 - 1] [i_1 - 3] [i_1 - 3] [i_4 + 2]))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) == (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_13 [i_0 - 1] [i_4 - 2]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)62))))) : (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_0] [10U]))))) ? (((((/* implicit */_Bool) 296323338)) ? (5310984773554528943LL) : (((/* implicit */long long int) 296323341)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((signed char) arr_3 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5148220658611442396LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) : (8796025913344LL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                                arr_21 [i_0] [i_1] [i_2] [i_0] [i_5 + 2] [i_6] = ((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [10U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_8] [i_8] [i_8] [(unsigned short)14] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((8796025913342LL), (((/* implicit */long long int) var_6)))), (((arr_30 [i_7] [i_8] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48394))) : (-4623275933415215680LL)))))) && ((!(((/* implicit */_Bool) arr_22 [i_10]))))));
                                arr_34 [i_7] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(arr_24 [i_8] [i_8])))) ? ((~(arr_22 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_31 [i_11] [i_10] [i_7] [i_7])))))), (max((((/* implicit */long long int) max((arr_23 [i_11]), (((/* implicit */unsigned int) arr_27 [i_7] [i_7] [i_7]))))), (min((arr_22 [i_10]), (((/* implicit */long long int) var_1))))))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) ((arr_30 [i_7] [i_7] [i_9]) ? (((/* implicit */int) arr_30 [i_9] [i_8] [i_7])) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_9]))))) ? (((/* implicit */int) max((arr_30 [(unsigned char)19] [i_7] [i_7]), (arr_30 [i_7] [i_8] [i_9])))) : (((((/* implicit */int) arr_30 [i_7] [i_8] [i_9])) - (((/* implicit */int) arr_30 [i_7] [i_8] [i_9])))));
                    arr_35 [i_9] [5U] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_7] [23U] [i_9])) ? ((+(((/* implicit */int) arr_30 [i_7] [i_7] [i_7])))) : (((/* implicit */int) max((arr_26 [i_7]), (((/* implicit */unsigned char) arr_31 [i_7] [i_8] [i_9] [i_9]))))))), (((((/* implicit */_Bool) min((arr_32 [14LL] [i_8] [(unsigned char)15] [(unsigned char)15] [i_7]), (((/* implicit */long long int) arr_30 [i_7] [(signed char)23] [i_9]))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)61922))))))));
                }
            } 
        } 
    } 
}
