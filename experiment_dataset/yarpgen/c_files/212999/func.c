/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212999
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)14222)))), (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) arr_3 [i_1])) : ((~((-(((/* implicit */int) arr_3 [i_1]))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned char)0))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) -551087297605184957LL))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(2801475284U))))))), (min((min((1945435277U), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) ((arr_7 [(_Bool)1] [i_1] [i_1] [i_1]) % (((/* implicit */int) var_0)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_18 [i_5] [i_1] = ((/* implicit */int) (_Bool)1);
                                arr_19 [i_1] [i_6] = var_8;
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((arr_9 [(_Bool)1] [12U] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)21)))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (_Bool)1);
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) arr_20 [i_0]);
                    var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) (unsigned short)14233)), (-7500917512156737051LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) var_6);
                                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((9109378260719803489ULL) == (min((arr_5 [i_7] [(_Bool)1] [i_9]), (var_11)))))) + (min((((/* implicit */int) arr_25 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [(short)12] [i_0 + 2])), (((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)51313))))))));
                            }
                        } 
                    } 
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        arr_31 [2ULL] [i_10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((unsigned char) (unsigned char)50)))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_13 [(unsigned char)4] [i_1] [i_10] [i_11]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_29 ^= ((/* implicit */long long int) arr_21 [(short)0] [(short)0] [8ULL]);
                            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))))))));
                            var_31 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        }
                        arr_34 [i_1] [i_0] [5ULL] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    }
                    var_32 = ((((((/* implicit */_Bool) arr_7 [i_10] [i_1] [i_1] [(short)10])) ? (min((arr_8 [i_0]), (((/* implicit */unsigned long long int) arr_29 [i_10] [i_1] [i_10] [10] [i_10])))) : (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_1] [i_1] [i_10]))) == (((/* implicit */unsigned long long int) 132120576U)));
                    var_33 -= ((/* implicit */unsigned short) -1912957134);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) (unsigned char)215);
}
