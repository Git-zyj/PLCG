/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52878
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_3 [i_0] [i_0] [17ULL]))))))) ? (((/* implicit */int) max((var_4), (var_4)))) : (min(((+(((/* implicit */int) arr_5 [(unsigned char)14] [(unsigned short)0] [i_0 - 2])))), (((/* implicit */int) (signed char)11)))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_14 [(unsigned char)11] [i_0] [i_2] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((4426945295402635500ULL) << (((((/* implicit */int) (unsigned short)58871)) - (58868))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1339)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20982))) : (-7043721293326380051LL))))))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_1 + 2] [i_2] [i_2 - 1]) % (((/* implicit */int) var_6))))) : ((+(min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))))));
                        arr_15 [i_0 - 3] [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1227275348U)) ? (-2404432849933717275LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31956)))))) ? ((-(((/* implicit */int) (short)-22333)))) : (((/* implicit */int) arr_5 [i_0] [3U] [i_0])))) != ((((((-(((/* implicit */int) var_9)))) + (2147483647))) << (((((/* implicit */int) (unsigned short)31585)) - (31585)))))));
                        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20971))) >= (((((/* implicit */_Bool) 7043721293326380050LL)) ? (4084811543U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34009)) * (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_19 [i_1] [i_0] [i_1 - 1] [i_1] [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2 + 4])) / (((((/* implicit */_Bool) -827804060)) ? (((/* implicit */int) min((arr_16 [(_Bool)1] [i_0] [i_1 + 3] [i_3] [(unsigned short)4] [i_3] [i_2]), (((/* implicit */unsigned short) var_5))))) : ((+(((/* implicit */int) var_6))))))));
                            arr_20 [i_0] [i_0] = ((/* implicit */signed char) var_10);
                            var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_11)), (((max((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_2] [i_4] [i_0])), (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)24158), ((unsigned short)20968)))))))));
                            var_16 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)33958)))))) << (((((arr_17 [i_4] [i_0] [i_2 + 4] [i_0] [i_0]) & (((/* implicit */long long int) min((var_2), (var_10)))))) - (6281737998960697848LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)33958)))))) << (((((((arr_17 [i_4] [i_0] [i_2 + 4] [i_0] [i_0]) & (((/* implicit */long long int) min((var_2), (var_10)))))) + (6281737998960697848LL))) + (671659234567380479LL))))));
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) var_3);
                        }
                    }
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(arr_17 [i_0] [(signed char)14] [(short)6] [i_2] [i_2])))) ^ (var_3))))));
                    var_18 -= ((((/* implicit */_Bool) min(((unsigned char)243), (((/* implicit */unsigned char) (signed char)41))))) ? (((((((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2 - 1])) * (((/* implicit */int) arr_10 [i_2 + 2])))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [18U] [i_0])) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_10 [i_2])));
                    var_19 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        arr_22 [i_0] = max((arr_6 [i_0] [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned long long int) ((7043721293326380050LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) != (3067308146U)))))))));
        var_20 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0 + 1] [i_0 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44582)) ? (4281515840098145124ULL) : (((/* implicit */unsigned long long int) 1888703770))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) min((arr_17 [i_0] [(unsigned short)6] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_2)))))))));
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0 - 2])), (((var_10) % (((/* implicit */int) var_5))))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) | ((((_Bool)0) ? (((/* implicit */int) (short)-32596)) : (((/* implicit */int) (unsigned short)31588)))))) : (((/* implicit */int) var_11))));
    }
    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        arr_25 [(short)11] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) var_10)) + (((((/* implicit */_Bool) var_0)) ? (16633365232261688312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44553))))))), (((/* implicit */unsigned long long int) -1888703760))));
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) arr_23 [i_5]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((-1888703760) & (((/* implicit */int) var_7))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5]))))), (1888703760))) : ((-(((/* implicit */int) (unsigned short)38795))))));
    }
}
