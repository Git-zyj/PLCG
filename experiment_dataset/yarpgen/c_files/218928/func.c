/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218928
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((arr_9 [i_0 - 1] [i_0 - 1]) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))))))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) % (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0] [i_0]))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1]))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) < (1917495276))))));
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57660)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned short) (-2147483647 - 1)));
        var_17 = ((/* implicit */_Bool) ((long long int) arr_5 [i_4 + 1] [i_4 + 2] [i_4] [i_4]));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)30464)) : (((/* implicit */int) (unsigned short)30464))))) ? (((long long int) (unsigned short)54043)) : (((/* implicit */long long int) -1734926258))));
        var_19 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)63)))));
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_5] [i_5]), (((/* implicit */long long int) (unsigned short)41652)))))))), (max((((/* implicit */int) min(((unsigned short)22188), (((/* implicit */unsigned short) (signed char)-35))))), ((+(((/* implicit */int) (unsigned short)35086)))))))))));
                            var_21 = ((/* implicit */signed char) max((max(((unsigned short)37572), (((/* implicit */unsigned short) arr_3 [i_5] [i_6])))), (((/* implicit */unsigned short) var_8))));
                            var_22 = ((var_7) + (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_3 [i_7] [i_6 + 2])) : (((/* implicit */int) (unsigned short)35072)))), (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_3))))))));
                            var_23 |= (+(((/* implicit */int) min((arr_22 [i_9 + 1]), (arr_22 [i_9 - 1])))));
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [9LL] [5LL])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)35))))) ? (((/* implicit */int) ((var_4) != (var_10)))) : (((/* implicit */int) max(((signed char)83), (var_3))))))));
                        }
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5]))) / (((arr_13 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_10 = 2; i_10 < 10; i_10 += 3) 
                        {
                            arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) 64424509440LL));
                            var_26 = ((/* implicit */signed char) var_11);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [(_Bool)1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5])))));
                        }
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) var_10);
                            arr_33 [i_11] [i_11] [i_11] [i_8] [i_11] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (var_10) : (((/* implicit */long long int) min(((-(((/* implicit */int) arr_21 [i_5] [i_6 + 2] [i_5] [i_11])))), (((((/* implicit */int) (unsigned short)54043)) << (((((/* implicit */int) (unsigned short)37086)) - (37084))))))))));
                        }
                    }
                } 
            } 
        } 
        var_29 ^= ((/* implicit */int) min((max((((/* implicit */long long int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)3])), (64424509440LL))), (min((var_4), (((/* implicit */long long int) arr_27 [i_5] [i_5] [(signed char)4] [i_5] [i_5] [i_5]))))));
    }
    var_30 = ((/* implicit */long long int) var_0);
    var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) ((signed char) (unsigned short)54043))) ? (-4684992851735971015LL) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)119), ((signed char)-47)))))))));
    var_32 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min(((unsigned short)65531), (var_6)))) : (var_9))));
}
