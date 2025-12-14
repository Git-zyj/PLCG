/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191529
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1965606108U)) || (((/* implicit */_Bool) (short)12288)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-11853)) <= (((/* implicit */int) (short)12268))))) : (((/* implicit */int) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) var_9)))))));
                            arr_10 [(unsigned char)10] [i_1] [(unsigned char)10] [i_3] &= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32171))))) * (var_1)))), (((((/* implicit */_Bool) ((int) var_0))) ? (((((/* implicit */_Bool) (short)-29943)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29943))) : (var_4))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)106)), (var_1))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6))))) ? (var_4) : (((/* implicit */long long int) ((unsigned int) -1330900442907576689LL))))) == (((/* implicit */long long int) 1022549453))));
                                arr_16 [1ULL] [i_1] [i_2] [i_0] [(signed char)5] = ((/* implicit */short) (!(((((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_0] [i_0]))) <= (((/* implicit */int) var_8))))));
                                arr_17 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (~(var_4)));
                            }
                            for (short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((long long int) max(((unsigned char)9), (((/* implicit */unsigned char) var_8))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) -1474477712))), (var_1))))));
                                arr_21 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((int) arr_1 [i_0]))), (((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [3ULL] [i_0])) / (var_7)))));
                            }
                            for (short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                            {
                                arr_24 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)12288)) ? (((/* implicit */int) ((unsigned short) (unsigned short)64891))) : (((/* implicit */int) (signed char)12)))) <= (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_0)))), (((/* implicit */int) min(((short)-12288), (((/* implicit */short) var_5)))))))));
                                arr_25 [i_3] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) ^ ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)12288))))))));
                            }
                            arr_26 [i_3] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_2 + 2] [(signed char)10])) | (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_9)))))))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_4))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (signed char i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            {
                arr_35 [i_7] |= ((/* implicit */long long int) -1022549453);
                arr_36 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_7 - 2])) ? (max((((/* implicit */long long int) var_8)), (var_7))) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_37 [i_7] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)-28697))) ^ (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_7 - 1])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned char)137)))))));
                arr_38 [(signed char)4] = ((/* implicit */unsigned long long int) ((short) var_5));
            }
        } 
    } 
}
