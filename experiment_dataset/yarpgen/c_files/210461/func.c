/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210461
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) (((~(var_0))) < (((/* implicit */unsigned long long int) (~(var_7))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (!((!(((/* implicit */_Bool) -1879502755357908755LL)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (((~(min((var_0), (((/* implicit */unsigned long long int) -1879502755357908759LL)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_3))))))));
        arr_7 [i_1] = ((/* implicit */short) (unsigned short)65526);
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_6] [(unsigned char)4] &= ((1879502755357908758LL) / (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_20 [i_2] [(_Bool)1] [i_3] [14LL] [i_6] [14LL]), (var_7)))))));
                            var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_6)))) ? (min((min((arr_17 [i_2] [i_3] [i_4 - 1] [i_3]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_3] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_5])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_4 - 1] [i_5] [i_6]))))) >= (((/* implicit */unsigned long long int) (~(arr_11 [i_2] [i_3] [i_4 + 1]))))))))));
                            var_14 = arr_16 [i_6] [i_5] [i_4] [i_3] [i_2];
                            arr_22 [i_3] [i_4 + 1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_2] [i_2] [i_2] [i_3] [i_2]) ? (((/* implicit */int) arr_19 [(short)3] [i_3] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_19 [i_6] [i_3] [i_4 - 1] [i_3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_3] [i_2]))) : (((((/* implicit */_Bool) (unsigned short)5480)) ? (1879502755357908735LL) : (-1879502755357908757LL)))));
                        }
                    } 
                } 
            } 
            arr_23 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) < (((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_19 [i_2] [(unsigned short)14] [i_3] [i_3] [i_3]))))) ? (arr_11 [i_2] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_18 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2]))))))));
        }
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17968))) == (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_24 [i_2] [i_7]))) ? (arr_29 [i_2] [i_2] [i_2] [i_9]) : (((int) var_7))))) && (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_16 [i_2] [i_7 + 1] [i_2] [i_8] [i_9])))))))));
                        arr_33 [i_7 + 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_31 [i_2] [i_7] [5LL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18611))) : (((((/* implicit */_Bool) arr_18 [i_8] [i_9 - 2] [i_9] [i_9] [i_9 - 1] [i_9 - 3])) ? (var_0) : (((/* implicit */unsigned long long int) arr_20 [i_2] [i_7] [i_9 - 3] [i_8 + 1] [i_2] [i_9 - 3]))))));
                        var_17 = ((/* implicit */short) ((arr_5 [i_7 - 1] [i_7 + 1]) + (((((/* implicit */_Bool) arr_18 [i_9 - 1] [i_9] [i_9 - 2] [i_8 - 1] [i_8 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_28 [i_7 - 1] [i_8 + 1] [i_9 - 3])) : (arr_5 [i_7 + 1] [i_7 - 1])))));
                        arr_34 [i_2] [i_7 - 1] [i_8] = ((unsigned short) (((+(261171881867780923ULL))) + (var_6)));
                    }
                } 
            } 
            arr_35 [i_2] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> ((((+(((long long int) 1879502755357908774LL)))) - (1879502755357908771LL)))));
        }
        arr_36 [i_2] &= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_6 [i_2])), (((((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) * (var_6))))), (((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))));
        arr_37 [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_27 [i_2] [i_2] [i_2])), (arr_26 [i_2]))))))) ? ((((_Bool)1) ? (min((33554430), (((/* implicit */int) arr_25 [(unsigned char)5] [(unsigned char)5] [i_2])))) : (((int) 3792427708696455270ULL)))) : (((/* implicit */int) ((_Bool) max((var_9), (((/* implicit */long long int) arr_10 [i_2]))))))));
        var_18 -= ((/* implicit */short) ((((((/* implicit */_Bool) 1879502755357908757LL)) || (((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) var_0)))))) ? (var_9) : (min((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2])), (min((131071LL), (((/* implicit */long long int) arr_28 [i_2] [i_2] [i_2]))))))));
    }
    var_19 ^= ((/* implicit */unsigned short) ((unsigned long long int) (((+(var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46760)) || (((/* implicit */_Bool) var_3)))))))));
}
