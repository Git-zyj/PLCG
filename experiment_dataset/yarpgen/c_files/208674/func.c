/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208674
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
    var_12 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)2)) ? (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_3))))))) << (((((/* implicit */int) var_11)) - (11469)))));
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_9))) > (min((((/* implicit */long long int) var_11)), (var_6)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)15788)) : (((/* implicit */int) arr_1 [i_0] [7U])))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_15 += var_8;
            arr_8 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 137438953471ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) - ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
        }
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0] [i_0] [i_0]))), ((+(137438953484ULL))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((int) var_9))))) ? (((((((/* implicit */int) var_0)) >> (((137438953471ULL) - (137438953450ULL))))) - (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_2))));
        var_18 = ((/* implicit */unsigned char) ((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) var_6))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 67108800)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_9 [i_3]))));
            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) arr_9 [i_3]))));
        }
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_23 [i_2] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) min((-67108801), (((/* implicit */int) var_0))))))));
                        arr_24 [i_2] [i_4] [i_4] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((signed char) ((var_5) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_4] [i_4] [(unsigned char)1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6 - 2] [i_6 + 2]))))));
                        var_21 |= ((/* implicit */unsigned short) var_6);
                        arr_25 [i_2] [i_4 + 3] [i_6] [i_4 + 3] [(signed char)4] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_3)), (((long long int) max((arr_14 [i_4] [i_5] [i_6]), (((/* implicit */unsigned int) var_5)))))));
                    }
                } 
            } 
        } 
        arr_26 [i_2] = ((/* implicit */signed char) var_4);
        arr_27 [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27716)) >= (((/* implicit */int) (_Bool)1))))), ((-(var_8))));
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            for (short i_9 = 3; i_9 < 14; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (_Bool)1))));
                        var_23 = ((/* implicit */short) min((((/* implicit */signed char) var_3)), (arr_34 [i_7] [i_9 - 2] [i_9 - 3])));
                        arr_40 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((arr_33 [i_7] [i_8 + 2] [i_9]) + (2147483647))) << (((((/* implicit */int) arr_21 [i_7] [i_8] [i_9] [i_10])) - (15987)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8 - 1] [i_8 + 1]))) : (0ULL))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) (short)-25915);
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (int i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                arr_53 [i_7] [15ULL] [i_7] [15ULL] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_44 [i_12 - 1] [i_12 - 1])) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_14]))) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_7] [i_11] [i_11] [i_7]))) : (max((var_6), (((/* implicit */long long int) arr_37 [i_7] [(signed char)0] [i_12] [i_13] [i_14]))))))));
                                arr_54 [1ULL] [15] [1ULL] [i_13] [i_7] = ((/* implicit */unsigned long long int) ((short) 1723241025));
                                arr_55 [i_14] [i_7] [i_12] [i_7] [i_7] = var_8;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_26 += ((/* implicit */int) ((((long long int) (_Bool)1)) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_46 [i_7] [i_12 - 1] [i_12]))))));
                    arr_56 [i_7] [i_7] [i_11] [i_12] = ((/* implicit */signed char) ((_Bool) var_0));
                }
            } 
        } 
    }
}
