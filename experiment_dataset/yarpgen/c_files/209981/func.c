/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209981
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
    var_18 = ((/* implicit */unsigned int) var_17);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)30511)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */long long int) ((((/* implicit */int) min(((short)20016), (((/* implicit */short) (_Bool)1))))) != (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_2 + 1] [i_3]) > (arr_4 [i_0] [i_1] [i_2 - 2] [i_3]))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_2 + 3] [i_1] [i_2 + 1]) / (arr_6 [i_2 + 3] [i_1] [(signed char)9])))) ? (((/* implicit */long long int) ((int) (short)20035))) : (1957613879149117811LL)));
                            arr_14 [i_0] [i_1] [(unsigned short)7] [i_3] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            var_20 = ((/* implicit */short) min(((~(arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) 1258095211065332638LL)))));
                            var_21 &= ((/* implicit */short) (+(min((arr_11 [i_3] [i_2 - 3] [i_2 + 2] [i_2 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) (short)-32752);
        var_23 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_0])), ((~(((/* implicit */int) (short)-144))))));
        arr_15 [i_0] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (var_6))))))));
        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))))));
    }
    for (short i_5 = 2; i_5 < 7; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            var_25 += ((/* implicit */_Bool) (-((((+(((/* implicit */int) (unsigned short)14868)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            arr_21 [i_6 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_6]) / (arr_19 [i_6] [i_6])))) ? ((+(arr_19 [i_6] [i_6]))) : (arr_19 [i_6] [i_6])));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 1; i_10 < 7; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (~(arr_0 [i_8])));
                            arr_37 [i_10 + 3] [i_9] [i_8] [i_7] [i_5 + 3] = ((/* implicit */_Bool) arr_20 [(_Bool)1]);
                            var_27 = ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (1256212379754493170LL));
                            var_28 = (~(arr_5 [i_8] [i_7] [i_5 + 1]));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_31 [i_5] [i_5 + 2] [i_7] [(short)8])))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) arr_2 [i_5]))));
            /* LoopNest 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_31 = arr_20 [i_11];
                        arr_45 [i_5 + 2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-20016))));
                        arr_46 [i_5] [i_5] [i_5] [i_5 - 2] [i_5 + 2] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_40 [i_5] [i_5]);
                        var_32 *= var_1;
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (short)-161)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (short)32752)))), (((/* implicit */int) (!(((/* implicit */_Bool) 5218210245950006951LL))))))), (((/* implicit */int) (signed char)(-127 - 1)))));
            var_34 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))), (arr_25 [i_11])))), (((unsigned long long int) arr_41 [i_5 - 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]))));
            arr_47 [i_11] [i_5] [i_5] = ((/* implicit */long long int) var_4);
        }
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_35 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14362845032812916608ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19707))) : (arr_6 [i_5 + 3] [i_5 + 3] [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (arr_6 [i_5 + 3] [i_5 + 3] [i_5]))))) : (min((arr_6 [i_5 + 3] [i_14] [(unsigned short)2]), (arr_6 [i_5 + 3] [i_14] [i_5]))));
            arr_51 [i_5 - 2] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_49 [i_14])), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_17)))) / (var_6)))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20031)) ? (((/* implicit */int) (signed char)127)) : (1414696478)));
        }
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_37 = 8052279224081330513LL;
            var_38 = min((((-1256212379754493186LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) ((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_35 [(signed char)2] [i_15] [(short)7] [i_15] [i_15] [i_5 + 1] [i_15])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [(_Bool)0] [i_5 - 1] [(_Bool)0]) == (((/* implicit */int) arr_1 [i_15] [i_15]))))))))));
        }
        var_39 = ((/* implicit */short) ((6ULL) % (((/* implicit */unsigned long long int) arr_38 [i_5] [i_5] [i_5 + 1]))));
        var_40 ^= ((/* implicit */short) (-(((/* implicit */int) arr_52 [i_5]))));
        arr_54 [i_5] = var_4;
    }
    var_41 = ((/* implicit */unsigned long long int) var_15);
}
