/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23609
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (var_1)))) ? (((((/* implicit */_Bool) (short)-32754)) ? (-701771875129857811LL) : (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((701771875129857811LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                                var_16 = ((/* implicit */long long int) (!(arr_9 [i_0] [i_3 + 1] [i_2] [i_0] [i_4])));
                                var_17 = (-((-(((/* implicit */int) (short)3889)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_5])) < (((/* implicit */int) (_Bool)0)))))));
                        arr_18 [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_5] [i_2] [i_1] [i_0]);
                    }
                    var_19 |= ((/* implicit */unsigned char) (unsigned short)10044);
                }
                var_20 = ((/* implicit */int) 6189460214272348801LL);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    var_21 = ((arr_3 [i_0] [i_6 - 1] [i_6]) & (arr_3 [i_0] [i_6 - 1] [i_6]));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) ((signed char) -701771875129857811LL))) : (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)-124))));
                    arr_24 [i_0] = ((/* implicit */long long int) var_14);
                }
                for (long long int i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_1] [i_0] [i_8]) ? (((/* implicit */int) (unsigned short)24322)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_8]))))) ? (((((/* implicit */_Bool) arr_12 [i_8] [i_0] [i_1] [i_0] [i_0])) ? (-2147735946923067742LL) : (((/* implicit */long long int) 1695408892U)))) : (((/* implicit */long long int) (-(-1146423798))))))));
                    var_25 = ((/* implicit */unsigned long long int) min((((arr_14 [i_0] [i_8 - 2] [i_8 + 1]) & (((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_1] [i_8]))))), ((((-(((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned short)64512)))))))));
                }
                var_26 = ((/* implicit */signed char) min((((((/* implicit */int) (short)-94)) & (((/* implicit */int) (unsigned short)12005)))), (((/* implicit */int) var_13))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    arr_30 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) min((((unsigned int) arr_14 [i_0] [i_1] [i_9])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) ^ ((~(((/* implicit */int) arr_21 [i_0] [i_0])))))))));
                    arr_31 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_23 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-32742), ((short)-1))))) : (((long long int) (unsigned short)13))))), (min((((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_9])) ^ (var_5))), (((unsigned long long int) (_Bool)1))))));
                    var_27 |= ((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)243), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)3890)))) : (((/* implicit */int) (signed char)-57))))), (((((/* implicit */_Bool) -5222038703097707780LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3582903129413478309LL)))));
}
