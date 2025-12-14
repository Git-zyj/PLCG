/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35696
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_11 += max(((unsigned short)32768), (((/* implicit */unsigned short) (short)-25755)));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) min((arr_1 [8ULL]), (arr_3 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [(signed char)20] [(signed char)20])) ? (((/* implicit */int) arr_2 [(unsigned short)11] [(unsigned short)11])) : (((/* implicit */int) (short)4095))))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (-(((((/* implicit */_Bool) min(((unsigned char)128), (((/* implicit */unsigned char) arr_3 [6ULL]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [20ULL]))))) : (-4927043871008997412LL))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [6ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))) ^ (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 63LL)) % (10814818276687974367ULL)))) ? (16756014257205647410ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1243658862)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) arr_4 [i_1])))))))));
        var_14 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1] [i_1])), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [10]))))), (max((((/* implicit */unsigned short) arr_0 [i_1] [i_1])), ((unsigned short)6802)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */long long int) 12000746791415664386ULL);
                var_15 = (-(min((((/* implicit */unsigned long long int) arr_4 [2U])), (max((((/* implicit */unsigned long long int) arr_0 [0LL] [i_2])), (var_4))))));
            }
            arr_15 [i_2] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-4754))));
                /* LoopNest 3 */
                for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6 - 2] [i_6] [11U] [(signed char)10] [11U] = ((/* implicit */_Bool) 8942781569215162661LL);
                                arr_33 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(signed char)9] [i_5] [(signed char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8]))) : (arr_6 [(unsigned short)19] [(unsigned short)7])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_25 [i_8 + 2] [(_Bool)1] [10U])), (233122206U)))) : (((((/* implicit */_Bool) (signed char)56)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)40046))))), (min((((/* implicit */unsigned long long int) var_6)), (1807309172234269256ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
