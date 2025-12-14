/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47388
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -32599854))))), ((-(0LL)))));
                            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) (~(min((32599853), (-32599854)))))) ? ((-(32599854))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_9 [i_0 + 2] [(unsigned char)1] [5ULL] [i_3])))))))))));
                            arr_11 [i_0] [i_1] [(signed char)10] [i_3] [(unsigned char)2] &= ((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)177)), (arr_7 [i_0 + 2] [i_0 + 2] [4] [i_2])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)10)), (-32599852)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (short i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_14 [i_4 - 2] [i_4 + 1]);
                                arr_27 [i_4] [6] [i_6] [i_7 - 3] [(unsigned char)14] [i_4] [i_4 - 2] &= ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_19 [i_7 - 1] [i_8]))))));
                            }
                        } 
                    } 
                } 
                arr_28 [(unsigned short)3] [1LL] [i_4] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155)))))) * (((((/* implicit */_Bool) 15811593562274653297ULL)) ? (15811593562274653297ULL) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) max((max((var_15), (((/* implicit */long long int) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 2])))), (((/* implicit */long long int) min((((/* implicit */int) arr_19 [(unsigned char)2] [i_5 - 1])), (-32599854))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-16384)), (max((var_15), (((/* implicit */long long int) var_7))))))) ? ((((((~(arr_32 [i_9 + 3] [i_10] [i_10]))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9] [i_10] [(signed char)13]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35032)) ? (((/* implicit */int) (short)16401)) : (((/* implicit */int) (signed char)4))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)177))))) : (arr_33 [i_9 + 2])))));
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)101)) >> (((((int) 15811593562274653297ULL)) - (1278993510)))))), ((~(max((arr_33 [i_10]), (824633720832LL)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((max((min((((/* implicit */long long int) var_7)), (var_12))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-16384))))))) * (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned char)196))) & (((/* implicit */int) (short)4)))))));
                            var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 727632872)) ? (((((/* implicit */_Bool) arr_34 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 2])) : (((/* implicit */int) arr_34 [i_9 + 2] [i_9 + 2])))) : (((/* implicit */int) ((unsigned short) max((arr_36 [i_9 + 1] [i_11] [18LL]), (((/* implicit */long long int) arr_29 [i_11]))))))));
                        }
                    } 
                } 
                arr_40 [(short)14] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)28639)) : (((int) arr_32 [i_9] [i_9 + 2] [i_9 - 2]))));
            }
        } 
    } 
    var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-16365)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16373)) ? (var_10) : (((/* implicit */unsigned int) 1120518500))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_6)))))));
}
