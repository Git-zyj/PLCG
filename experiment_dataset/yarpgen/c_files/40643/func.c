/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40643
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)61)), (((((/* implicit */_Bool) max((var_6), (var_10)))) ? ((~(((/* implicit */int) (signed char)1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) var_2))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_13))))))), (((((/* implicit */int) arr_7 [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_1] [i_2])))));
                    arr_10 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_2 [i_1]));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (min((arr_5 [i_0]), (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3] [i_4] [i_4]))))) ? (2126956520239701210ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)32)))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_9 [i_5])))))))));
                    arr_19 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_1) <= (((/* implicit */int) arr_6 [i_4] [i_4]))))) - (((/* implicit */int) ((2577258284239879149ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))))) ? (((/* implicit */int) (signed char)-122)) : (min((((/* implicit */int) max(((signed char)-99), ((signed char)-23)))), (((((/* implicit */_Bool) arr_5 [7])) ? (((/* implicit */int) (unsigned short)30627)) : (((/* implicit */int) var_15)))))));
                    arr_20 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((-(((((/* implicit */int) arr_16 [i_5])) % (((/* implicit */int) arr_9 [i_3])))))) : (var_9)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_18 [(unsigned short)6] [i_3] [i_3])))), (((((/* implicit */int) arr_2 [i_3])) < (((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_22 [i_6] [i_6])) : (4ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned short)52914))))))))), (((((/* implicit */int) min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6])))) ^ (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) (signed char)20)) : (arr_22 [i_6] [i_6]))))))))));
        var_20 = (signed char)-45;
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)19605), (var_0))))) ? (max((arr_23 [i_7] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_7] [i_7] [i_7])) / (((/* implicit */int) var_15))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7]))) / (15572629559843829912ULL)))))));
        arr_28 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    }
    var_21 = ((((((((/* implicit */_Bool) -742676589)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))) & (max(((~(var_7))), (((/* implicit */unsigned long long int) max((var_4), (var_8)))))));
    var_22 &= ((/* implicit */signed char) (~(6721423863801998336ULL)));
}
