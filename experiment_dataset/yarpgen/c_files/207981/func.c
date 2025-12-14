/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207981
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
    var_17 = var_8;
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (5217743406499365332LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [8ULL] [i_4] [i_2] [(unsigned char)1] [i_4] [(unsigned char)2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (arr_2 [i_4 - 1]) : (((/* implicit */unsigned long long int) var_10))))));
                                arr_12 [i_0] [i_1 + 3] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_8 [i_1 + 2] [8] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 3]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)27569)), (3879535609U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49920))) : (((((/* implicit */_Bool) (unsigned short)15615)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_6)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned char) (unsigned short)15615);
                            arr_18 [i_0] [i_0] [(signed char)1] [i_6] = ((/* implicit */int) arr_13 [i_1]);
                            arr_19 [(short)10] [7ULL] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)15633)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (long long int i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (579398264239025766LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8 - 1] [i_8] [i_9] [i_9] [(_Bool)1] [i_9 - 1] [i_9 - 1]))))), (((/* implicit */long long int) (+(((/* implicit */int) ((3391947509U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9] [i_7] [(short)0] [i_0])))))))))));
                                var_22 ^= ((/* implicit */long long int) (unsigned char)5);
                                arr_28 [0ULL] [i_1 + 4] [i_7] [i_7] [i_8] [i_8 - 3] [i_8 - 3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)11))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned short)15635))));
                                arr_29 [i_0] [i_1 - 2] [i_8] [i_8] [0LL] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)43))));
                            }
                        } 
                    } 
                } 
                arr_30 [i_0] [i_0] = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)11)), ((short)-20079))))) > (((unsigned long long int) (unsigned short)22099)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    arr_41 [i_10] [i_11] [i_11] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_33 [(unsigned short)7])))));
                    var_24 = ((/* implicit */long long int) ((15337569467875609116ULL) >> ((((+(arr_37 [i_10]))) + (1763460162)))));
                }
            } 
        } 
    } 
}
