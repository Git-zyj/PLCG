/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212893
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
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((_Bool) 30592364U))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((18446744073709551611ULL) != (10ULL))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) == (var_13))))) == ((~(arr_0 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_8))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(4ULL))))));
            var_19 = ((/* implicit */short) ((arr_7 [i_2] [i_2]) >> (((arr_7 [i_1] [i_2]) - (2990819572697060103LL)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_20 = (+(18446744073709551612ULL));
                arr_10 [i_1] [i_2] [i_1] |= ((/* implicit */unsigned int) (~(26ULL)));
            }
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_21 = ((((/* implicit */unsigned long long int) (-(var_5)))) & (31ULL));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_22 = (-(2587257709896090644ULL));
                    arr_16 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_14 [i_4] [i_2] [i_4]));
                }
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) - (((36ULL) << (((((/* implicit */int) arr_13 [i_1] [i_2] [i_6] [i_1])) - (5506))))))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(arr_11 [i_2] [i_2] [i_2] [17ULL]))))));
                }
            }
            arr_19 [i_1] [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_14 [i_1] [i_1] [0ULL])) % (((/* implicit */int) (unsigned char)178)))));
            var_25 = ((/* implicit */unsigned int) (+(12102301740728658707ULL)));
        }
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+((-(arr_6 [i_1] [i_7]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_27 [i_8] = ((/* implicit */signed char) (((-(((/* implicit */int) var_2)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_27 ^= ((/* implicit */signed char) min((((int) var_9)), (((/* implicit */int) ((signed char) arr_21 [i_7])))));
                }
                arr_28 [i_8] [i_7] [i_8] = (((~(arr_22 [i_8] [i_8] [i_7] [i_1]))) ^ ((~(18446744073709551586ULL))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_37 [i_12] [i_12] [i_10] [i_1] [i_10] [i_7] [i_1] = ((/* implicit */short) (-(((((/* implicit */int) ((unsigned short) var_10))) * (((/* implicit */int) (_Bool)1))))));
                            arr_38 [i_1] [i_7] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_33 [i_10] [(signed char)3] [i_10] [i_7] [i_10])) != ((~(((/* implicit */int) var_10)))))))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) var_12))))))))));
                        }
                    } 
                } 
                var_29 = max((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (min((arr_35 [i_1] [i_7] [i_10] [i_10] [i_7] [i_1] [i_10]), (arr_35 [i_1] [i_7] [i_10] [i_10] [i_1] [i_1] [i_1]))));
            }
            arr_39 [i_1] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((-208717662) != (((/* implicit */int) (unsigned char)178)))))));
            arr_40 [i_7] [i_7] [i_1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)185))))), (max((((/* implicit */unsigned long long int) var_11)), (18446744073709551567ULL))));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        arr_43 [i_13] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_30 [i_13] [i_13] [i_13]))))))), (min((arr_6 [i_13] [i_13]), (((/* implicit */unsigned long long int) (!(var_2))))))));
        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28012)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (max((((/* implicit */unsigned long long int) (+(var_5)))), ((+(arr_25 [i_13] [i_14] [i_13] [i_14])))))));
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)-3374), (((/* implicit */short) var_11)))))));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (+((+(var_5))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            arr_49 [i_13] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_2)))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((unsigned long long int) (~((+(((/* implicit */int) var_6))))))))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (+((-(446667994U))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        arr_52 [i_16] = (+(15859486363813460986ULL));
        var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (18446744073709551584ULL)));
    }
}
