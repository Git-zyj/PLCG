/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198224
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
    var_12 *= ((/* implicit */unsigned short) min((((((((-268435456) + (2147483647))) >> (((-1) + (15))))) ^ (-1576919652))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) 174360089U)) < (-243002476685957879LL)))) == (max((-1576919629), (((/* implicit */int) var_5)))))))));
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((2792882390U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4 - 2] [(_Bool)1] [i_4] [i_3 - 2] [(_Bool)1] = min((7862860164918192714ULL), (((/* implicit */unsigned long long int) ((signed char) ((unsigned int) arr_12 [19LL] [i_3] [i_2] [i_2] [i_0] [i_0])))));
                                arr_16 [i_1 - 1] = ((/* implicit */signed char) -1576919652);
                                arr_17 [i_4 - 4] [i_3] [i_2] [(short)8] [(signed char)10] = ((/* implicit */int) min(((+((-(814615227U))))), (((((unsigned int) 67108736LL)) | (((/* implicit */unsigned int) 2008813055))))));
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) 16383U))));
                            }
                        } 
                    } 
                    arr_19 [(signed char)2] [i_1] [(signed char)2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)3594)), (2008813055)))) - (((unsigned int) -243002476685957863LL))))) % (((243002476685957865LL) - ((~(6007230215447752247LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned int) arr_20 [i_0] [i_1 - 1] [i_2] [i_1 - 1]);
                                var_16 ^= ((/* implicit */signed char) ((short) arr_12 [13U] [13U] [i_1 + 1] [13U] [i_5] [i_6]));
                                arr_28 [i_6] = ((/* implicit */unsigned short) ((unsigned int) 366770461));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
