/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219891
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
    var_10 = var_2;
    var_11 = ((((/* implicit */_Bool) ((short) ((long long int) (signed char)64)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) (unsigned char)255))))));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((2795052270U), (((/* implicit */unsigned int) arr_9 [i_3] [i_1] [i_0])))) >> (((/* implicit */int) min(((short)32755), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (short)16557)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) && (((/* implicit */_Bool) 2305843009213693951ULL)))))))) : (min((arr_4 [i_2 + 1] [i_2 + 1] [i_1 + 3]), (((/* implicit */unsigned long long int) var_2))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_14 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) min((((/* implicit */int) (unsigned char)237)), (((((/* implicit */int) (unsigned short)65535)) << (((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) - (13190372863294519861ULL)))))))) : (((/* implicit */signed char) min((((/* implicit */int) (unsigned char)237)), (((((/* implicit */int) (unsigned short)65535)) << (((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]) - (13190372863294519861ULL))) - (15270279007891037735ULL))))))));
                                arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_0] = max((((/* implicit */long long int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((short) (signed char)-9)))))), (max((((arr_2 [i_4]) * (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((long long int) 1152921487426977792LL)))));
                            }
                            var_14 = ((/* implicit */unsigned int) ((int) var_3));
                            arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)14427)) + ((+(((/* implicit */int) min((var_0), (((/* implicit */short) (signed char)-102)))))))));
                            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) min((((int) max(((unsigned short)23411), (((/* implicit */unsigned short) (_Bool)1))))), (((/* implicit */int) ((signed char) ((((/* implicit */long long int) arr_9 [i_0] [i_1] [(unsigned short)17])) < (var_8)))))));
                        }
                    } 
                } 
                var_15 &= ((/* implicit */long long int) 4294967295U);
                var_16 &= ((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16295))))))))));
            }
        } 
    } 
}
