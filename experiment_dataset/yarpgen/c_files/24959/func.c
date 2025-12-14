/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24959
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [(unsigned short)14] = ((/* implicit */unsigned long long int) max((268435455LL), (((/* implicit */long long int) (unsigned short)3475))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))), (((unsigned short) 0LL))));
            arr_6 [i_1] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) (_Bool)1)), (-2293664978267069613LL))), (((/* implicit */long long int) ((unsigned short) (-(-1065806432)))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) max((max((min((17557826306048ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) min(((unsigned char)64), ((unsigned char)241)))), (min((((/* implicit */short) (signed char)103)), ((short)882))))))));
                            arr_15 [i_4] [1] [i_3] [i_0] [i_0] [i_1 + 2] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_16 [i_1] [i_1] [i_1] [i_4] [(_Bool)1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4290))))), (max((541360104U), (((/* implicit */unsigned int) (_Bool)1))))))), (3ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))), ((short)32746)))))))));
                            arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)95))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)3762)) ^ (((/* implicit */int) (unsigned char)192))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (2621750459U)))))), (min((((unsigned long long int) (signed char)-80)), (((/* implicit */unsigned long long int) max(((signed char)105), (((/* implicit */signed char) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) (-(min((8154700171265391823ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((min(((unsigned short)52131), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned char)12), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            arr_28 [i_0] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 174667899)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)194)) & (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13412)))))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_9] [(short)23] = ((/* implicit */unsigned short) -1);
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */long long int) -174667899)) == (3199109591605251924LL))))));
            arr_32 [i_9] = ((/* implicit */short) ((((/* implicit */int) (signed char)-34)) <= (((/* implicit */int) (unsigned char)44))));
        }
    }
    var_24 += ((/* implicit */unsigned char) var_13);
    var_25 = ((/* implicit */short) ((unsigned int) var_17));
}
