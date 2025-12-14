/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5117
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [(short)12] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 -= ((/* implicit */unsigned int) var_3);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned int) max((((/* implicit */short) var_4)), (min((((/* implicit */short) (unsigned char)118)), (arr_8 [i_1])))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)-4))));
            arr_12 [i_1] [i_2] = ((/* implicit */short) (unsigned char)116);
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        arr_20 [7LL] [i_4] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_17 [i_5] [i_3] [i_4] [i_1] [i_3])) > (((/* implicit */int) arr_17 [i_1] [i_1] [i_4] [(short)9] [i_3])))));
                        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_1]))) << (((min((arr_3 [i_3]), (arr_3 [i_5]))) - (17209007339593706316ULL)))));
                        var_20 -= ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-5))))), (max((arr_8 [i_5]), (((/* implicit */short) arr_16 [i_1] [i_4]))))));
                        arr_21 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */int) (short)-4599)) != (((/* implicit */int) (short)-12)))), ((!(((/* implicit */_Bool) arr_1 [i_1]))))))) != (((((/* implicit */_Bool) (+(arr_14 [i_1] [(_Bool)1] [i_1])))) ? (((/* implicit */int) (signed char)-4)) : ((~(((/* implicit */int) (unsigned char)255))))))));
                    }
                } 
            } 
            arr_22 [i_1] = min((arr_0 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_9 [i_1])) != (min((((/* implicit */unsigned int) arr_17 [i_3] [i_1] [i_1] [i_1] [i_1])), (arr_2 [9U])))))));
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            arr_25 [i_1] [(unsigned char)16] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_6] [i_6] [i_1] [i_6] [i_6])) << (((((/* implicit */int) arr_17 [(unsigned char)21] [i_6] [i_1] [i_1] [i_1])) - (40))))) / (((/* implicit */int) ((short) ((arr_5 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))))));
            arr_26 [i_1] [i_1] = ((/* implicit */_Bool) (short)4612);
        }
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((min((arr_15 [i_1] [i_1]), (arr_15 [i_1] [i_1]))) ^ (((unsigned int) arr_8 [i_1])))))));
        arr_27 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (arr_18 [i_1] [(unsigned char)21] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
        var_22 = ((/* implicit */int) min((var_22), (((int) ((short) arr_2 [i_1])))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7]))))), ((+(((/* implicit */int) arr_16 [i_7] [i_7]))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            arr_35 [i_8] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_8] [15LL])) : (((/* implicit */int) arr_34 [i_7] [i_8]))))))) ? (((((/* implicit */_Bool) arr_34 [i_7] [i_8])) ? (((/* implicit */int) arr_34 [i_8] [i_7])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_30 [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned char)146))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7]))) : (arr_6 [14U] [i_8])))))))));
        }
        arr_36 [i_7] &= ((/* implicit */unsigned long long int) ((short) ((((3537103029U) >= (((/* implicit */unsigned int) arr_9 [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)54))))) : (min((arr_13 [i_7]), (((/* implicit */long long int) arr_19 [i_7] [i_7] [i_7] [i_7] [(signed char)8] [i_7])))))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_40 [i_9] [i_9] [i_9] = arr_33 [i_7];
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (!(((-2LL) == (((/* implicit */long long int) arr_2 [i_7]))))))))))));
            var_25 = ((unsigned int) min((((/* implicit */long long int) arr_30 [i_7] [i_7])), (arr_13 [i_7])));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        arr_47 [i_7] [i_10] [i_9] [i_10] [i_11] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_15 [i_10] [i_11])) : (15LL)))) ? (max((arr_30 [i_7] [i_7]), (((/* implicit */unsigned int) arr_17 [i_7] [i_9] [i_10] [i_11] [i_10])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_7])))))));
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)114)) : (1180453728)))) & (3062739668176401730ULL))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 1866213980)) <= (var_1)))), (((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */int) (short)15276)) : (2147483633))))))));
                        arr_48 [i_9] [i_10] [i_9] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) min((((/* implicit */short) (signed char)-115)), (var_2)))) + ((+(((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        }
        var_27 -= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6384566339883567436LL)) ? (((/* implicit */int) arr_19 [(short)19] [i_7] [i_7] [i_7] [i_7] [(short)19])) : (arr_9 [i_7]))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38)))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
    {
        arr_52 [i_12] = ((/* implicit */unsigned char) min((min((3062739668176401726ULL), (((/* implicit */unsigned long long int) (unsigned char)34)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 1912162048))) ? (((/* implicit */int) (unsigned char)242)) : (((((/* implicit */_Bool) -23218190)) ? (((/* implicit */int) arr_37 [i_12])) : (((/* implicit */int) var_7)))))))));
        arr_53 [i_12] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 2) 
    {
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            {
                var_28 += ((/* implicit */signed char) (+(var_11)));
                arr_61 [i_14] [i_14] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24466)) ? (((/* implicit */int) arr_58 [i_13 + 1] [i_13 + 3] [i_13 + 3])) : (((/* implicit */int) arr_23 [i_13 - 1]))))) == ((((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) : (3537103029U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_34 [i_13] [i_14])), (var_10)))))));
            }
        } 
    } 
}
