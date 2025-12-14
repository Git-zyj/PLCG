/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195703
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) arr_0 [14U]))))) + (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_2 [i_0 - 2])))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))), (((((var_8) + (9223372036854775807LL))) >> (((var_8) + (5773081060489727624LL)))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((_Bool) arr_2 [i_0 + 1])))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) (unsigned char)50)))) == (((/* implicit */int) ((unsigned short) arr_5 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) -904337907)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */unsigned short) var_1))))) ? (max((1527883827978563299ULL), (((/* implicit */unsigned long long int) arr_9 [i_2])))) : (((/* implicit */unsigned long long int) 816433637U))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */int) (signed char)121))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (short)20229)) < (((/* implicit */int) (short)31))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (short)5141)) : (((/* implicit */int) arr_1 [i_2])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) max((((((((/* implicit */_Bool) 2707495957U)) ? (arr_9 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_2]))))))), (((/* implicit */unsigned int) arr_4 [i_2] [(_Bool)1]))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((long long int) ((unsigned long long int) arr_12 [i_2] [i_3] [i_4]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 904337906)), (1879048192U)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) -2630750579346663143LL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (11795298447222471231ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32087)))));
        arr_14 [i_2] = ((/* implicit */unsigned int) max(((unsigned short)49745), (((/* implicit */unsigned short) (_Bool)1))));
    }
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_26 [i_5] [i_8] [i_7] [i_6] [(unsigned char)7] [i_5] = ((/* implicit */_Bool) (unsigned short)47666);
                        var_20 = ((/* implicit */unsigned short) ((unsigned char) var_0));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_5] [i_6 - 1]) : (((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */int) var_1))))));
                        arr_27 [i_5] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3895703488U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)160))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 3478533647U)) : (17316277745168675094ULL))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)0)))))) + (arr_13 [i_5] [i_5] [i_5]))))));
    }
    for (signed char i_9 = 4; i_9 < 16; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_9 + 2])) ? (((/* implicit */long long int) arr_29 [i_9 + 2] [i_9])) : (max((((/* implicit */long long int) var_5)), (arr_28 [(unsigned char)5]))))));
        arr_30 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (arr_4 [i_9] [i_9 + 1]) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) arr_28 [i_9 + 4])) ? (arr_28 [i_9]) : (arr_28 [i_9 + 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)236), ((unsigned char)152)))) && (((/* implicit */_Bool) 816433645U)))))) : ((~(((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17769))) : (1321678919207910516LL)))))));
        arr_31 [i_9] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_4 [i_9] [i_9]) : (((/* implicit */int) arr_5 [i_9])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    }
    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                {
                    arr_41 [i_10] [i_12] [i_11] [i_10] &= ((/* implicit */unsigned char) arr_37 [(unsigned short)9] [i_10] [i_10]);
                    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_39 [i_10] [(_Bool)1])) - (0ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_10]))) * (var_5))) : (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10] [i_10])))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_37 [i_10] [i_10] [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_35 [i_10 - 3] [i_10 + 2])) ? (((((/* implicit */_Bool) arr_37 [15ULL] [i_10 - 1] [i_10])) ? (((/* implicit */unsigned long long int) arr_37 [i_10 - 1] [i_10] [i_10])) : (arr_38 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (333715659092132047LL))))))));
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_5), (((4U) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_0)) : (max((((/* implicit */long long int) -324367477)), (-4848909610785720783LL)))))));
        arr_42 [i_10] = ((/* implicit */_Bool) var_7);
        var_28 = ((/* implicit */short) arr_38 [i_10 + 1] [i_10 + 1]);
    }
    var_29 *= ((/* implicit */_Bool) var_6);
}
