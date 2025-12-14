/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225544
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
    var_19 = ((/* implicit */int) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [(short)2] = ((/* implicit */unsigned char) arr_4 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]);
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 4162131956U)))))));
            }
            var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_8)), (arr_5 [i_0] [i_1] [i_0] [i_0])))));
            arr_7 [9] [2ULL] [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))));
            arr_8 [i_0] [i_1] = (+(((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)5] [(unsigned char)5])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))))));
        }
        for (short i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            arr_12 [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_5 [4ULL] [4ULL] [4ULL] [4ULL]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [7ULL])))))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_0]))) : (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))))) + (((((/* implicit */_Bool) max((arr_5 [i_3 + 1] [i_3 + 1] [(signed char)2] [i_0]), (((/* implicit */long long int) var_14))))) ? (3281846207U) : ((+(3281846207U)))))));
            arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_0] [i_0] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))));
            arr_14 [i_3 + 2] [i_3] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < ((~(((/* implicit */int) var_9))))))) : ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_3] [i_0] [i_0]))))))));
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3]))));
        }
        var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [4])))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned short)10]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) (+(max((3239753206U), (((/* implicit */unsigned int) arr_0 [i_4]))))));
            arr_18 [i_0] [i_0] [10ULL] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
            arr_19 [i_0] = ((/* implicit */unsigned int) min((((min((var_1), (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) - (70)))))))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0]))));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_24 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_0])))) * (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_5]))))));
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */short) var_3);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_26 [i_0] = ((/* implicit */_Bool) arr_24 [9U] [i_0] [9U]);
            var_25 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_5)) ? (arr_23 [i_0] [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0]))))) - (((/* implicit */long long int) max((arr_16 [7] [7]), (((/* implicit */int) arr_24 [i_0] [i_0] [(signed char)9]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_25 [i_0]), (arr_0 [i_6 - 1])))), (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14336))))))))));
            var_26 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33713)) ? (var_14) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_6 - 1] [i_0])) ? (var_17) : (2141176657536327318LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)191))))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) arr_28 [i_7]);
        arr_31 [i_7] [(signed char)16] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((arr_30 [(_Bool)1]) + (arr_30 [(_Bool)1])))))));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        arr_34 [11LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) < (3736746828U))))));
        arr_35 [5] = ((/* implicit */signed char) arr_29 [(unsigned char)13]);
        arr_36 [(signed char)0] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_8] [i_8])) < (((/* implicit */int) arr_27 [i_8] [i_8])))))));
        arr_37 [i_8] = ((/* implicit */short) (~((~((~(arr_30 [i_8])))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */int) var_0))))))) % (var_17)));
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) < ((+(((/* implicit */int) var_13))))))) + (((/* implicit */int) var_9))));
}
