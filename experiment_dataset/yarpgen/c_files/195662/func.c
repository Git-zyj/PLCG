/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195662
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
    var_10 = ((unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) || (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (arr_2 [i_0 - 4]) : ((~(var_2)))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-1544155621)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2588030027U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 10025475077806709783ULL)))))))));
        var_13 &= ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 3]);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) var_1);
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) (signed char)91)) : (-1156786753))) <= ((~(((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))));
    }
    for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        arr_9 [12U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_7 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14087)) - (-1912887222)))) : (min((arr_7 [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned int) (signed char)-92))))));
        arr_10 [11] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2] [i_2]);
    }
    var_15 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : ((+(var_0))))) / ((~(max((var_2), (var_7))))));
    /* LoopSeq 3 */
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) min(((signed char)57), (var_4)));
        var_16 = ((/* implicit */unsigned long long int) ((int) arr_4 [i_3 - 2] [i_3 - 1]));
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) arr_2 [i_3]);
        arr_17 [i_3 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)201)), (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) ((unsigned short) 984782027U))) : ((+(var_7)))))));
        arr_18 [i_3] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3])) : (((/* implicit */int) (unsigned short)14087)))));
    }
    for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */int) (signed char)-37)), (var_0))), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_5)))))) >= (((((/* implicit */_Bool) ((int) arr_19 [i_4]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (var_2)))));
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) > (((/* implicit */int) arr_21 [i_4 + 2])))))));
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_27 [i_4] [i_4 + 1] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_4 + 1] [i_6]))) == (arr_22 [i_6])));
            arr_28 [i_4] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (min((((/* implicit */unsigned long long int) (signed char)127)), (10025475077806709783ULL)))))), ((signed char)92)));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4])) & (((/* implicit */int) var_4)))))));
        }
        var_20 = ((/* implicit */unsigned int) (~((+(((((/* implicit */int) arr_25 [i_4 + 2] [i_4 - 1] [i_4])) / (((/* implicit */int) var_3))))))));
        var_21 *= ((/* implicit */unsigned long long int) (signed char)-3);
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max(((unsigned char)55), (((/* implicit */unsigned char) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_35 [i_9] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)585)), (((arr_8 [i_7] [i_9 + 2]) + (arr_8 [i_7] [i_9 - 1])))));
                    var_23 = ((/* implicit */unsigned short) ((int) (+((~(((/* implicit */int) arr_29 [i_7] [i_8])))))));
                    var_24 = ((/* implicit */short) ((((((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_21 [i_7])))) ? ((-(((/* implicit */int) (unsigned char)54)))) : ((~(var_7))))) + (2147483647))) << (((((/* implicit */int) arr_20 [i_8])) - (1)))));
                }
            } 
        } 
    }
}
