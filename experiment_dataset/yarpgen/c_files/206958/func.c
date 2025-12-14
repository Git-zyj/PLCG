/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206958
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [12ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1531799556010755316ULL)))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_1)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))));
                    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(arr_5 [i_1] [i_0] [i_2])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4095)))))));
                    var_12 = (-(((6322886369050712840ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4091))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned long long int) -1295819817))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)32767)))) : (((/* implicit */int) min((arr_4 [i_0] [i_0]), ((signed char)113))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1398755288U)) ? (((((/* implicit */_Bool) 8070450532247928832LL)) ? (((/* implicit */unsigned long long int) 1295819825)) : (2ULL))) : (15304018719359124788ULL)));
        arr_10 [i_3] = ((/* implicit */signed char) min((562932773552128ULL), (((/* implicit */unsigned long long int) (unsigned char)10))));
        arr_11 [i_3] = ((unsigned long long int) ((unsigned long long int) 15ULL));
        var_14 = ((/* implicit */short) var_2);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1990592423)) || (((/* implicit */_Bool) (signed char)6))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (signed char)121);
                                var_17 = ((/* implicit */int) ((1U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))));
                                arr_23 [(_Bool)1] [i_8] [i_7] [7ULL] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) (-(-1587179197163126135LL)));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [(_Bool)1] [i_7 - 1] [i_7] [i_5]))))), ((~(2509023705092703353ULL)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)27))))) == ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_14 [i_4] [(signed char)5])))))) << (((/* implicit */int) arr_21 [i_5]))));
                    var_20 = min((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (unsigned short)32762)) : (((/* implicit */int) (signed char)82)))), ((-(((((/* implicit */_Bool) 1222495871)) ? (((/* implicit */int) var_8)) : (1295819829))))));
                    arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)32770), (arr_20 [i_6] [i_5] [i_6])))) ? (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((35336663U), (((/* implicit */unsigned int) (signed char)-61))))))) / (((unsigned long long int) ((unsigned long long int) 894416900U)))));
                }
            } 
        } 
        arr_25 [1ULL] = ((/* implicit */unsigned char) arr_22 [i_4] [i_4] [i_4] [8] [i_4] [i_4] [i_4]);
        arr_26 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1295819815)) || (((/* implicit */_Bool) 3352567719241398643ULL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
        {
            arr_30 [i_9 - 1] = ((/* implicit */signed char) (-(((arr_27 [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            var_21 ^= ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_9 + 1]))) : (arr_12 [i_4] [i_9])));
        }
        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
        {
            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) 17ULL)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) 2893392682U))));
            arr_33 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(signed char)1] [i_10 + 1])) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [9ULL] [i_10 - 1]))) >= (var_6)))) : (((/* implicit */int) ((unsigned char) arr_7 [i_10] [i_10 - 1])))));
            arr_34 [i_10] [i_4] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 1])) ? (max((-9223372036854775805LL), (((/* implicit */long long int) (signed char)-117)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_4] [i_4]) == (((/* implicit */unsigned long long int) 45356711U))))))))) ? (min((arr_22 [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 + 1] [17U] [i_10]), (((/* implicit */unsigned int) arr_13 [i_10 - 1] [i_10])))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-118)) + (2147483647))) << (((((((/* implicit */int) (signed char)-65)) + (72))) - (7))))))));
            arr_35 [i_10] [i_10] = ((/* implicit */signed char) (~(arr_8 [i_10])));
        }
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (13703519015592456204ULL)));
}
