/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207044
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) (short)-4096)))))));
                            arr_11 [i_3] [i_1] [i_1] [i_3] = max((((/* implicit */long long int) arr_10 [i_1] [0ULL] [i_3 - 2] [(short)4])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) + (var_2))));
                            var_19 ^= ((/* implicit */long long int) (short)248);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_20 = (+(max((((((/* implicit */_Bool) 6917529027641081856ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))), (arr_13 [i_5 - 1] [i_5 + 1]))));
                            var_21 -= (+(18158513697557839872ULL));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 11931783878325478810ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11529215046068469759ULL))), (((/* implicit */unsigned long long int) -4864905272632156155LL))))) ? (((/* implicit */unsigned long long int) (~((~(-2472200257790223995LL)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16773))) : (((((/* implicit */_Bool) (short)-28891)) ? (11931783878325478822ULL) : (11529215046068469760ULL)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1] [6ULL] [4ULL] [i_7] [i_0] |= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_6 + 2] [i_8 - 1] [i_8] [10LL] [i_8 - 1])) ? (((/* implicit */int) arr_21 [i_6 + 2] [i_8 - 1] [i_8 - 1] [i_8] [(unsigned char)6])) : (((/* implicit */int) var_14)))));
                                arr_26 [i_0] [3ULL] [i_1] [i_6] [i_6] [i_0] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (18446743936270598144ULL))))))) ? (11931783878325478810ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 833082339599704607ULL)) && (((/* implicit */_Bool) var_11)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (short)27186))))) ? (max((var_15), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (short)19571))))))))));
}
