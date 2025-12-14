/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200620
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
    var_20 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) 849637086U))))), (max((var_6), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned short)65535), ((unsigned short)39324)))), (((unsigned long long int) var_15))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65531)), (var_13)))) : (((((_Bool) (unsigned short)56971)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_9)))))) : (arr_1 [i_0] [i_0 + 2])))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_19))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (18273324653083350939ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))) ^ (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) 724987495)) : ((-9223372036854775807LL - 1LL)))))))));
        arr_6 [i_1] |= ((/* implicit */_Bool) 1632006340);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned char) max((max((arr_4 [i_1] [i_2]), (((/* implicit */unsigned long long int) 724987495)))), (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
            var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_10 [i_2]))) * (arr_1 [i_1] [i_2]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-39), ((signed char)93))))) : (arr_4 [i_1] [i_1])))));
        }
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((long long int) (+(arr_1 [i_3 + 1] [i_3 - 2]))));
                        arr_22 [i_3] [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_3])) : (-724987471))) * (((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))))) && ((!(((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_3 + 1]))))));
                        var_26 *= ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
            arr_23 [i_4] [i_3] [i_3] = ((/* implicit */long long int) var_15);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_7] [i_3] = ((arr_15 [i_7]) ? (((1759279165) | (((/* implicit */int) arr_15 [i_3 - 1])))) : (((/* implicit */int) min(((unsigned short)8572), (((/* implicit */unsigned short) arr_15 [i_3 + 1]))))));
            var_27 *= max((min((858603147961375776ULL), (((/* implicit */unsigned long long int) (signed char)-86)))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (10548186706313484952ULL))))));
            arr_29 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        }
        arr_30 [i_3] = ((((/* implicit */_Bool) 2898528589901542173LL)) ? (max((((/* implicit */unsigned long long int) arr_7 [6])), (arr_1 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_19))))))));
        var_28 = ((/* implicit */unsigned short) 8730595253709347448ULL);
        arr_31 [i_3] = ((/* implicit */unsigned short) arr_20 [i_3 + 1] [i_3] [i_3] [i_3]);
    }
    for (long long int i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
    {
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_12 [i_8 - 2] [i_8])) % (((/* implicit */int) (_Bool)1)))));
        var_29 += ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_8])), (var_19))))) != (min((((/* implicit */unsigned long long int) arr_34 [i_8] [i_8 + 1])), (var_1)))))), (((((((/* implicit */int) arr_21 [(_Bool)1])) >> (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) arr_25 [i_8] [i_8])) == (((/* implicit */int) (unsigned short)51681)))))))));
        arr_36 [i_8] = ((/* implicit */long long int) var_7);
    }
}
