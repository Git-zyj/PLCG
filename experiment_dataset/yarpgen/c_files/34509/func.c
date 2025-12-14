/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34509
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((int) (unsigned char)255))))));
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)49280)) : (((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */int) ((unsigned short) max((705835483), (arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))))))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_3])) : (((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)252)))))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4])))) & (((unsigned int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                var_14 = ((/* implicit */int) arr_1 [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
                                arr_18 [i_0] [i_2] [i_0] [(unsigned char)13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (((((/* implicit */_Bool) (unsigned short)16255)) ? (12576998128643811464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                var_15 = ((unsigned short) arr_22 [i_0] [i_1] [i_0] [i_3] [i_6]);
                                var_16 = ((/* implicit */int) var_8);
                            }
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1]))))), (max((((/* implicit */int) (short)15)), (4194282)))));
                arr_24 [i_0] = ((unsigned char) max((var_10), (((/* implicit */unsigned int) ((unsigned short) var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1968085738), (((/* implicit */int) (unsigned short)29786))))) ? (-4194303) : (((/* implicit */int) arr_29 [i_7]))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_26 [i_7]))))) ? (max((((/* implicit */long long int) ((4294967285U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))), (-2974655191413905985LL))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_27 [i_8])) ? (var_10) : (arr_27 [i_8]))), (((((/* implicit */_Bool) (unsigned short)45270)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8]))))))))));
            }
        } 
    } 
}
