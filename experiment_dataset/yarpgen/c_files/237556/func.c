/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237556
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
    var_12 = var_10;
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)44))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (arr_6 [i_0] [(signed char)0] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_7)))))))));
                    arr_7 [i_1 + 1] [i_1] = ((/* implicit */int) var_2);
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) var_0);
                    arr_9 [i_1] = min((((/* implicit */long long int) ((arr_2 [i_1 - 1] [i_1 + 1]) < (arr_0 [i_1 - 1] [i_1 + 1])))), (max((((/* implicit */long long int) max((var_9), (((/* implicit */int) var_4))))), (max((5548093385880640154LL), (((/* implicit */long long int) var_6)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (((var_11) ? (-5548093385880640161LL) : (var_10)))))) ? (min((var_10), (((/* implicit */long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_3 [i_1] [11ULL] [i_1]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_0))))))))));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
                                arr_17 [i_0] [i_1] [i_1] [10ULL] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_4 + 1]))))))) ? (((((/* implicit */_Bool) var_2)) ? (-906060874089504848LL) : (5548093385880640155LL))) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 + 1])) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) var_8)))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((unsigned long long int) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8951285449138550290LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5] [i_5]))))) : (min((5548093385880640158LL), (((/* implicit */long long int) arr_19 [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) var_3);
                                var_19 = ((/* implicit */signed char) (+(-5548093385880640152LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_29 [i_6] [i_5] [i_7] [i_7]))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_6] [i_7] [i_5])))))) ? (((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_25 [i_7]) : (((/* implicit */unsigned int) -1256497062)))) : (((/* implicit */unsigned int) max((877983933), (((/* implicit */int) (_Bool)1))))))))))));
                    arr_31 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 607435570)), (min((4978794213191048331ULL), (((/* implicit */unsigned long long int) (signed char)-103))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) && (((/* implicit */_Bool) 379105027U)))))))))) : (((((/* implicit */_Bool) ((var_11) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [0LL] [i_7] [0LL])))))));
                    arr_32 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) | (((/* implicit */int) var_11))))) ? ((~(-5548093385880640163LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((arr_25 [i_6]) / ((~(var_2)))))) : (min((((((/* implicit */_Bool) 144115188075331584LL)) ? (((/* implicit */long long int) var_2)) : (arr_28 [i_5] [i_6] [i_7] [i_6] [i_6] [i_7]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7] [i_6] [i_6] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21616)))))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5]);
    }
}
