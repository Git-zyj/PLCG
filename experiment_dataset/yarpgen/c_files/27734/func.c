/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27734
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [6ULL] [i_0] [i_1] [i_1] [(unsigned short)14] = ((/* implicit */unsigned int) (~(min((min((var_4), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_2)))))))));
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) min((7726724839965382255LL), (((/* implicit */long long int) (signed char)84)))))));
                    }
                } 
            } 
        } 
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) max((var_3), ((~(min((var_4), (var_4))))))))));
        arr_14 [(signed char)18] = ((/* implicit */unsigned short) min(((+(max((var_4), (var_9))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
        var_11 ^= ((/* implicit */_Bool) (+(min(((-(var_1))), (((/* implicit */long long int) var_7))))));
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_17 [(unsigned char)18] [i_4] = ((/* implicit */_Bool) var_3);
        var_12 = ((/* implicit */signed char) min((min((((/* implicit */long long int) var_2)), (var_1))), (((/* implicit */long long int) min((((/* implicit */int) min((var_2), (((/* implicit */short) var_7))))), ((~(((/* implicit */int) var_7)))))))));
        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)84), ((signed char)-84))))));
    }
    var_14 &= ((/* implicit */unsigned short) (~(var_1)));
    var_15 = ((/* implicit */unsigned char) min(((+(max((var_9), (8549432013388906516ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_5)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_16 -= ((/* implicit */signed char) var_7);
            arr_26 [13ULL] [i_6] = ((/* implicit */_Bool) (-(var_5)));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            arr_31 [(_Bool)1] [i_7] = ((/* implicit */short) var_4);
            arr_32 [i_5] [i_7] = ((/* implicit */unsigned long long int) var_6);
            arr_33 [i_5] [7ULL] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_4))))));
            var_17 -= ((/* implicit */unsigned long long int) var_1);
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 4; i_9 < 23; i_9 += 1) 
            {
                var_18 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_46 [i_8] [i_10] &= ((/* implicit */unsigned short) var_0);
                            var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_8))));
                        }
                    } 
                } 
            }
            arr_47 [i_5] [(unsigned char)7] = (-((+(var_3))));
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_2))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned short i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_56 [4LL] &= ((/* implicit */unsigned int) max((var_8), (min((max((var_1), (((/* implicit */long long int) var_6)))), (min((var_8), (((/* implicit */long long int) var_0))))))));
                        arr_57 [(_Bool)0] &= ((/* implicit */_Bool) var_1);
                        arr_58 [i_14] [(signed char)5] = ((/* implicit */unsigned short) var_1);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) max(((-(var_1))), (((/* implicit */long long int) var_2))))))))));
                        var_23 = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
        } 
        arr_59 [(_Bool)1] = ((/* implicit */signed char) (+(var_4)));
    }
    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_17 = 1; i_17 < 11; i_17 += 2) 
        {
            arr_64 [i_16] [(signed char)12] [(_Bool)1] = ((/* implicit */unsigned char) var_9);
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */short) var_7)), (max((min((var_2), (var_2))), (((/* implicit */short) min((((/* implicit */unsigned char) var_0)), (var_6)))))))))));
        }
        for (short i_18 = 2; i_18 < 13; i_18 += 4) 
        {
            arr_67 [i_16] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 2484467525510717231LL)), (8549432013388906517ULL)));
            var_25 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), ((-(var_8)))));
        }
        var_26 *= max((((/* implicit */unsigned long long int) (short)32759)), (8549432013388906516ULL));
    }
}
