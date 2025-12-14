/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45216
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_16))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 1058292163646519083ULL))))), (9394604821679375991ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (~(arr_0 [i_3 - 1] [i_3 + 1])));
                        arr_13 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_4)))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(811899685838440640LL)))) <= (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [8U] [i_1] [i_0]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_5))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (12857399600032852273ULL)));
                        arr_23 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */short) ((3628319034371861623LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51547)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            arr_26 [i_0] [i_7] = ((/* implicit */signed char) ((int) var_15));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 9394604821679375991ULL))) ? (0) : (((/* implicit */int) arr_22 [i_0])))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0])) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
        }
        arr_31 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))));
    }
    for (signed char i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
    {
        arr_34 [i_10 + 2] [i_10 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_32 [i_10 - 1]))) && (((/* implicit */_Bool) (unsigned short)8064))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_10] [i_10 - 1] [i_10 + 2])) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) arr_27 [i_10 - 1] [i_10] [2U] [i_10 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (short)7936))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) var_6))))))) : (((long long int) (-(var_18))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10 + 1] [i_10 - 1])))))));
                    arr_41 [6U] [(short)6] |= ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((unsigned long long int) arr_28 [8LL]));
    }
    for (signed char i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
    {
        var_31 += ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [(signed char)3] [i_13 + 1] [i_13] [(signed char)5]));
        var_32 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((arr_4 [10LL] [i_13]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)83))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (arr_27 [i_13 + 1] [i_13 + 2] [(signed char)4] [i_13 + 1]))));
        var_33 += ((/* implicit */unsigned short) var_8);
    }
}
