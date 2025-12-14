/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19485
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((long long int) (-(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 152129242866953391ULL);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] [(_Bool)1] [i_3] [i_3 - 1] [i_4] &= ((((/* implicit */_Bool) 18294614830842598249ULL)) ? (((((/* implicit */_Bool) (short)4545)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) : (18294614830842598262ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_1 + 1])))));
                        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26080)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) > (min((((/* implicit */unsigned long long int) (unsigned short)63024)), (824001581245801104ULL)))));
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2165518324602918020ULL), (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_1 - 1]))))) ? (arr_9 [i_1] [i_1 - 1] [18LL]) : (min((5443413369804774607LL), (((/* implicit */long long int) arr_5 [i_1] [i_1]))))))) + (arr_7 [i_1])));
        arr_18 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~(arr_0 [18U]))) : ((~(arr_9 [i_1] [17ULL] [i_1])))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 2) /* same iter space */
    {
        arr_21 [13U] = ((/* implicit */short) ((arr_7 [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_5])) > (824001581245801097ULL)))))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_6 [i_5]);
            arr_24 [i_6] [(unsigned char)10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_13 [i_5 - 1])))))) : (((((/* implicit */_Bool) 2165518324602918005ULL)) ? (72057594036879360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15)))))));
        }
        for (short i_7 = 3; i_7 < 23; i_7 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13351147273783902345ULL)) || (((/* implicit */_Bool) (signed char)-18))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!((_Bool)1))))));
            var_22 ^= ((/* implicit */int) (signed char)-5);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)5))) | (-5443413369804774603LL)));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            arr_29 [(signed char)8] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) + (152129242866953404ULL)))) ? (((/* implicit */long long int) arr_14 [i_5 + 1] [i_5] [i_5 + 1])) : (arr_28 [i_5 - 1])));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_5 - 1] [i_5 + 1] [(signed char)3] [i_5 + 1] [(unsigned short)14] [(signed char)3] [i_5])) ? (((/* implicit */int) arr_37 [i_5 - 1] [i_5 - 1] [(unsigned char)4] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)129))));
                            arr_38 [i_9] [(signed char)3] [i_9] [i_8] [i_5] [i_9] = ((/* implicit */signed char) ((arr_10 [i_5] [i_10] [i_5 + 1]) ? (((((((/* implicit */int) arr_25 [i_11] [i_9])) + (2147483647))) >> (((((/* implicit */int) var_11)) + (43))))) : (((((/* implicit */_Bool) -5443413369804774623LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4555))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((long long int) ((unsigned int) (_Bool)1)));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2326284942354779440ULL)))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((max((((((/* implicit */_Bool) (signed char)17)) ? (72057594036879337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192))))), (min((4396656651057728448ULL), (((/* implicit */unsigned long long int) -939266787)))))) * (((/* implicit */unsigned long long int) ((-939266771) & (((/* implicit */int) ((unsigned short) arr_11 [(_Bool)1] [(_Bool)1]))))))))));
        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-14)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_12])) ? (939266787) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)-2135)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4531))) : (152129242866953367ULL))))) : (((/* implicit */unsigned long long int) arr_14 [i_12] [i_12] [i_12]))));
    }
    var_29 = ((/* implicit */long long int) (short)4542);
    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_0))));
}
