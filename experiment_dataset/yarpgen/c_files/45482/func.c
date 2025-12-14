/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45482
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
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (9980634028804431507ULL)))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_0 [(unsigned short)8] [(unsigned short)8]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(8466110044905120108ULL)));
        arr_5 [(signed char)9] = ((/* implicit */short) ((((/* implicit */int) ((short) ((unsigned long long int) arr_0 [i_0] [i_0])))) % (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) + (8466110044905120108ULL)))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_10 [0ULL] [i_1 - 1] = ((((/* implicit */int) arr_7 [i_1 - 1])) - (((/* implicit */int) arr_7 [i_1 - 1])));
        var_20 = (!(((/* implicit */_Bool) 14328651786813018204ULL)));
        arr_11 [i_1] = ((/* implicit */_Bool) arr_8 [i_1 + 1]);
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((min((arr_12 [i_2]), (((/* implicit */long long int) var_15)))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [5] [5]))) / (var_17)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) * (9980634028804431507ULL)))));
        var_21 = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_2]));
        var_22 = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_18 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((long long int) min((arr_13 [i_2 + 1]), (arr_13 [i_3]))));
            var_23 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (8466110044905120108ULL)))) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))) << ((((+(max((var_16), (((/* implicit */unsigned long long int) arr_16 [i_2 + 1] [i_2] [i_2 + 1])))))) - (18446744073709551556ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (8466110044905120108ULL)))) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))) << ((((((+(max((var_16), (((/* implicit */unsigned long long int) arr_16 [i_2 + 1] [i_2] [i_2 + 1])))))) - (18446744073709551556ULL))) - (8500767310662673521ULL))))));
            arr_19 [i_2] [i_2] = ((/* implicit */short) ((unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (short)511)))), (max((arr_1 [i_2]), (arr_1 [i_3]))))));
        }
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_24 = ((/* implicit */short) ((int) min((arr_20 [i_2] [i_2]), (arr_20 [i_2] [i_2]))));
            var_25 = ((/* implicit */long long int) (-(((9980634028804431507ULL) * (9980634028804431507ULL)))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_25 [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) 3234302385U);
            var_26 = ((/* implicit */unsigned int) arr_13 [i_2 - 1]);
            arr_26 [i_2] [(unsigned char)9] = ((/* implicit */unsigned int) ((((long long int) min((arr_9 [i_2] [11]), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_5]))))) >> (((max((min((arr_14 [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_7 [i_2 + 1])), (arr_8 [i_5])))))) - (18446744073709549345ULL)))));
            var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (arr_14 [i_2]))));
        }
    }
    for (int i_6 = 2; i_6 < 19; i_6 += 1) 
    {
        arr_29 [i_6] = ((/* implicit */short) ((int) var_14));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    var_28 = ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_32 [i_6] [i_7] [i_8])))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_28 [i_6])), (arr_27 [i_6]))))))) > (min((((/* implicit */int) arr_0 [i_6 - 2] [i_7])), ((-(((/* implicit */int) (unsigned char)255)))))));
                    arr_34 [i_6] = min((max((((((/* implicit */_Bool) var_2)) ? (arr_32 [i_6] [i_6] [(_Bool)1]) : (9980634028804431495ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_6])) || (((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) ((short) arr_30 [17ULL] [i_6 - 1]))) ? (((10725209778523738892ULL) * (arr_31 [i_6]))) : (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned long long int) arr_1 [i_7])) : (var_1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) arr_30 [i_9] [i_6 + 1]);
                        arr_38 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((min((arr_31 [i_6]), (arr_31 [i_6]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_30 [i_6 - 1] [i_6 - 2]))) >> (((arr_30 [5LL] [i_6]) - (16049393731777546131ULL))))))));
        arr_39 [i_6] [i_6] = ((/* implicit */unsigned long long int) (signed char)-56);
        /* LoopSeq 3 */
        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 2) 
        {
            arr_42 [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned short)37166)))));
            arr_43 [i_6] [i_6] [i_10 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (-184321790) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((221719342U), (((/* implicit */unsigned int) (_Bool)1))))) : (((long long int) (unsigned char)1))));
            arr_44 [(signed char)15] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-52)))) * (min((((/* implicit */int) (signed char)-55)), (var_5)))))), (max((((long long int) var_18)), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)18963))) >= (432345564227567616LL))))))));
        }
        for (short i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            arr_47 [i_6] [i_6] = max((((((/* implicit */int) ((unsigned char) arr_40 [i_6] [i_6] [i_11 - 1]))) / (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) min((arr_33 [i_6]), (((/* implicit */short) (signed char)112)))))))));
            arr_48 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_32 [i_6] [i_11 + 1] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_32 [i_6] [i_11 - 1] [i_11 - 1]) == (arr_32 [i_6] [i_11 + 1] [i_11]))))) : (min((arr_31 [i_6]), (arr_32 [i_6] [i_11 - 1] [i_11])))));
        }
        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            arr_51 [i_6] [i_6] = ((/* implicit */unsigned long long int) (signed char)0);
            var_31 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)7)) ? (3144046174438914728LL) : (arr_41 [i_6] [i_6] [i_12]))) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (min((((/* implicit */long long int) (unsigned short)57933)), (7787722903184298015LL)))));
        }
    }
    var_32 = ((/* implicit */short) ((long long int) min((min((var_5), (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) 4073247952U)) || ((_Bool)1)))))));
}
