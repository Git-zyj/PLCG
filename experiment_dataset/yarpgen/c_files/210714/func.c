/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210714
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
    var_20 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) (((+(((/* implicit */int) var_16)))) & (((/* implicit */int) var_18))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)245))))), (((((/* implicit */_Bool) var_9)) ? (-4399084295471020155LL) : (((/* implicit */long long int) 2452187397U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_2]))), (((((/* implicit */_Bool) (signed char)-54)) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (18446744073709551615ULL)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] [i_5 + 1] = ((/* implicit */signed char) (unsigned short)1313);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-54)) / (max((arr_4 [i_5 + 1] [i_5 - 1] [i_0]), (arr_4 [i_5 + 2] [i_5 + 2] [i_5])))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_0])) && (((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5] [i_5 + 2] [i_4]))))))));
                        arr_19 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((0) != (((/* implicit */int) var_13)))) && (((/* implicit */_Bool) (signed char)-54)))) ? (((/* implicit */int) arr_12 [i_0])) : ((~(((/* implicit */int) (signed char)-54))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_6] [i_9])) << (((((((/* implicit */_Bool) arr_28 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 809571460622965537LL)) : (arr_22 [i_7] [i_9]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_24 |= ((/* implicit */unsigned short) arr_28 [i_6] [i_6]);
                    }
                } 
            } 
        } 
        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) max((var_8), (((/* implicit */long long int) var_14)))))) ? (((/* implicit */int) (unsigned short)16471)) : (((/* implicit */int) ((_Bool) arr_29 [i_6 + 2] [i_6] [i_6 - 2] [i_6])))));
        arr_33 [i_6] = ((/* implicit */unsigned char) ((max((1023U), (((/* implicit */unsigned int) (unsigned short)16471)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6 - 1] [i_6 - 2] [(signed char)8] [i_6] [(signed char)8] [i_6 - 1])))));
        var_26 |= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 2537606924U)) && (((/* implicit */_Bool) min((0), (((/* implicit */int) var_15)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 10366990559852323964ULL))))) + ((+(-56918247)))))));
    }
    var_27 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)16)))) ^ (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_16)))))));
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_19) + (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)13)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
}
