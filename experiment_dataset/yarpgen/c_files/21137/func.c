/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21137
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
    var_17 += ((/* implicit */unsigned int) 2147483647);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max(((((+(arr_1 [i_0] [i_0]))) << (((arr_1 [i_0] [4U]) - (1998917848485469910ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1553558365U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (6ULL) : (arr_1 [i_0] [i_0])))))))));
        var_18 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        var_19 ^= ((/* implicit */int) var_10);
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (18446744073709551613ULL)))))) ? (max((6ULL), (((arr_1 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) arr_5 [i_1])) - (arr_6 [i_1])))))));
        arr_9 [i_1] [i_1] = ((((((/* implicit */int) ((short) 4294967291U))) + (2147483647))) >> (min((max((arr_6 [i_1]), (((/* implicit */long long int) var_15)))), (min((arr_0 [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_1])))))));
        arr_10 [i_1] = ((/* implicit */unsigned int) (+(((arr_1 [i_1] [i_1]) / (arr_1 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_2])))) ? (arr_0 [i_2] [i_2]) : (((((/* implicit */long long int) var_3)) - (arr_2 [i_2])))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 6; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_31 [i_2] [i_2] [i_4] [(unsigned char)2] = ((/* implicit */unsigned int) 6509265956693479540ULL);
                            var_20 = ((/* implicit */unsigned short) arr_24 [i_3 - 2] [i_3 - 1] [i_5] [i_3 + 2]);
                        }
                        arr_32 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_4 - 1] [8] [i_5])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_1 [i_4 - 1] [i_3 - 2])));
                        arr_33 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_3 - 1] [i_4 + 2] [i_5] [i_5])) ? (arr_5 [i_3 - 1]) : (((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)127))))));
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 3) 
                {
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        {
                            arr_46 [i_10] [i_8] = ((/* implicit */unsigned int) ((((var_12) >= ((-2147483647 - 1)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_9] [i_10 - 3]) : (11937478117016072076ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55011)))));
                            arr_47 [i_10] [i_10] [i_9] [i_10] [i_11] [i_10] = ((arr_40 [i_11 - 1] [i_10 - 2] [i_10] [i_10 - 1]) ^ (((/* implicit */int) arr_42 [i_11 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 1])));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 593542847U))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((short) var_14)), (((/* implicit */short) (!(((/* implicit */_Bool) 2147483645)))))))) != ((~(max((((/* implicit */int) (short)-32744)), ((-2147483647 - 1)))))))))));
    }
    var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3882952713U), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15)))) : (var_3))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-4453))));
    var_25 = ((/* implicit */unsigned int) var_10);
}
