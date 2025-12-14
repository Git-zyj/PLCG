/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240332
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_14))) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_13)))))))))));
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)141)) < (((/* implicit */int) (unsigned char)185))))) % (((/* implicit */int) (unsigned short)22)))) + ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_2))))))));
    var_17 -= var_14;
    var_18 -= ((/* implicit */unsigned int) min((max((((((/* implicit */int) (unsigned char)6)) ^ (((/* implicit */int) (unsigned short)65533)))), ((-(var_14))))), (((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_2 [i_0] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)9] [i_0]))) == (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_2] [i_0]) : (var_6)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = var_5;
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (arr_11 [(unsigned char)4] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        arr_22 [5] [i_0] [i_4] [i_5 - 2] [i_6] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (unsigned short)65514))))));
                        var_20 |= ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_21 &= ((/* implicit */signed char) var_5);
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 572251313041797985ULL))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_7])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7])) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))))))));
    }
    for (int i_8 = 2; i_8 < 9; i_8 += 4) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) arr_3 [i_8] [i_8])))), (((((/* implicit */_Bool) arr_6 [i_8])) ? (var_1) : (((/* implicit */int) arr_16 [i_8] [i_8]))))))) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) var_4))));
        arr_31 [i_8 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7))) : (((((/* implicit */int) var_11)) / (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) arr_10 [(signed char)1] [(unsigned char)7] [(unsigned short)9] [(signed char)1]))), (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_8] [i_8] [i_8 - 2]) : (((/* implicit */unsigned long long int) var_7))))))));
    }
    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        arr_34 [i_9] |= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (((((/* implicit */unsigned long long int) var_14)) / (var_6)))))), ((~(((/* implicit */int) var_5))))));
        var_22 = min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (4544022272223594429ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))))))), (((((/* implicit */_Bool) ((17874492760667753646ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 8396244211321449060LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)65532)))))));
        arr_35 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [21U] [i_9])) ? (arr_33 [i_9] [23]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? ((((~(arr_33 [i_9] [i_9]))) / (arr_33 [i_9] [i_9]))) : (((long long int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */int) var_10)) : (var_14))))));
    }
}
