/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33844
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_4 [(unsigned short)8] [i_1 + 2] [i_1] = ((/* implicit */signed char) (short)10006);
            arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))));
            arr_6 [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((unsigned char) var_11));
            arr_7 [i_0] [(unsigned char)1] [i_0] |= ((/* implicit */long long int) (~(((/* implicit */int) (short)-10011))));
            arr_8 [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) ((int) (short)-10015)))))) & (((/* implicit */int) arr_3 [i_0] [i_1 - 1]))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11843122989132705758ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10001))) : (20ULL)));
            arr_14 [(unsigned short)7] [i_2] [i_2] = ((/* implicit */_Bool) -5733808048926375096LL);
            arr_15 [i_0] [i_0] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((+(arr_2 [i_2 + 2] [9LL] [i_0]))) : (((/* implicit */unsigned int) ((int) (unsigned char)162)))));
        }
        for (signed char i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
        {
            arr_20 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10003)) ? (-348956207) : (((/* implicit */int) (short)10005))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [8U] [i_3])), (562949953421311LL)))))) ? (min((((int) arr_19 [(signed char)10] [(signed char)10] [i_0])), (((/* implicit */int) ((signed char) arr_0 [i_3 + 2] [i_0]))))) : (((/* implicit */int) ((arr_0 [i_3 - 1] [i_3 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3 + 1])))))));
            arr_21 [i_3 + 1] [11] [11] = ((/* implicit */unsigned int) arr_19 [i_3 - 1] [i_3] [i_0]);
            arr_22 [(unsigned char)10] = ((/* implicit */int) min((((/* implicit */long long int) (((_Bool)1) ? (137165020U) : (((/* implicit */unsigned int) -1))))), (1159254619968678190LL)));
        }
        arr_23 [(signed char)7] = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (unsigned short)65514)) >= (((/* implicit */int) (unsigned char)17)))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)3] [i_0]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (var_10)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_27 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((_Bool) var_7))))) <= (((/* implicit */int) ((max((((/* implicit */int) arr_25 [i_4])), (var_6))) >= (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_35 [i_4] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) ((-1159254619968678189LL) < (((/* implicit */long long int) -1614361595))));
                        arr_36 [i_4] [4LL] [i_6 + 4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65341)) : (((/* implicit */int) ((arr_34 [i_4] [i_5] [i_4] [i_6] [(_Bool)1] [(short)1]) == (((/* implicit */long long int) 1128332352)))))));
                        arr_37 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 2150595187U);
                        arr_38 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((long long int) min((arr_33 [i_7 - 1] [i_6] [i_6 + 2] [i_6 + 4] [i_5] [i_5]), (((/* implicit */unsigned short) arr_32 [i_6 + 2] [(_Bool)1] [i_6] [i_6])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_8 = 2; i_8 < 14; i_8 += 3) 
        {
            arr_41 [(short)12] [i_4] = ((/* implicit */_Bool) (short)14356);
            arr_42 [i_8 + 2] = ((/* implicit */unsigned char) ((((_Bool) arr_28 [i_8 + 1] [i_8 + 1])) ? (min((10U), (((/* implicit */unsigned int) -486022993)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1948042096) > (((/* implicit */int) arr_28 [i_8 - 2] [i_8]))))))));
        }
    }
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (((((_Bool)1) ? (var_6) : (var_10))) == (((/* implicit */int) var_7))))) / (var_2)));
}
