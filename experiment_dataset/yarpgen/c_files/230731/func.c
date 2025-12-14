/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230731
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253))))) : (8022679649077979273LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)7931))))) || (((/* implicit */_Bool) var_9)))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(unsigned char)13] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124))))) * (((((/* implicit */int) arr_1 [i_0])) + ((+(((/* implicit */int) (unsigned char)0))))))));
        var_15 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_3 [i_2] [i_1]))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-7931)), (((-7368604553384777497LL) + (((/* implicit */long long int) 1542865644)))))))));
            arr_10 [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_2] [i_2]));
            var_18 = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_2])) != (min((((/* implicit */int) arr_5 [i_1])), (var_10))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_20 = ((((((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_3] [20ULL]))) < ((~(((/* implicit */int) arr_5 [i_3])))))) ? (((/* implicit */int) (((~(arr_12 [i_1] [i_3] [i_3]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3])))))))))) : (((/* implicit */int) arr_7 [i_3] [(_Bool)0])));
            var_21 = ((/* implicit */unsigned int) (!(min((((((/* implicit */int) arr_3 [i_1] [i_3])) > (((/* implicit */int) var_6)))), (((var_2) && (((/* implicit */_Bool) arr_6 [i_3] [4U]))))))));
            arr_13 [i_1] = ((/* implicit */unsigned int) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)126)) : (-801349203)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-52))))) && (var_2)))) : (min((((/* implicit */int) ((_Bool) var_4))), ((+(var_4)))))));
        }
        arr_14 [i_1] = ((/* implicit */long long int) var_8);
        arr_15 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_22 = ((/* implicit */unsigned int) (+(max((var_12), (((/* implicit */long long int) arr_5 [i_1]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((var_8), (((/* implicit */int) arr_5 [i_4]))))))) ? ((-(((14669900063962112144ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_4] [i_4])))) ? (((/* implicit */long long int) (((+(-179460888))) % (((/* implicit */int) (_Bool)1))))) : (var_12)));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_25 = ((/* implicit */_Bool) ((arr_4 [i_5] [i_5]) / (arr_4 [i_5] [i_5])));
        var_26 = ((/* implicit */long long int) arr_11 [i_5] [i_5]);
        /* LoopSeq 3 */
        for (signed char i_6 = 4; i_6 < 11; i_6 += 3) 
        {
            var_27 = ((/* implicit */short) ((unsigned long long int) -260551863));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) >= (-7560068893471394525LL))))));
            /* LoopNest 2 */
            for (long long int i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                for (signed char i_8 = 4; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_26 [i_6] [i_6])))) ? (((/* implicit */long long int) arr_4 [i_5] [(signed char)4])) : (arr_20 [4LL])));
                    }
                } 
            } 
            arr_31 [i_5] &= ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_5] [i_6] [i_5] [i_5] [i_5])) == (((/* implicit */int) var_6))))) * ((+(((/* implicit */int) (_Bool)1)))));
        }
        for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            arr_34 [i_9 + 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (arr_12 [i_5] [i_9 - 1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9 - 1] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) -709002263)) && (((/* implicit */_Bool) var_6)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            var_31 = ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_44 [i_10] [i_10] [i_12] [i_12] [i_10] [i_10] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_10] [i_12 + 1])) || (((/* implicit */_Bool) arr_9 [i_10] [i_12 - 1]))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (short)7931))))))));
                            arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_5] [i_10])) >> (((((/* implicit */int) var_9)) - (49960)))));
                        }
                    } 
                } 
            } 
        }
    }
}
