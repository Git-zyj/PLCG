/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39799
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) var_9);
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-3))));
    }
    for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_5)))), (min((((/* implicit */unsigned long long int) var_0)), (var_10))))), (var_10)));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 6; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) min(((+(max((((/* implicit */long long int) 1728191942U)), (3300347923452950901LL))))), (min((var_2), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_4)), (var_7))))))));
                    arr_12 [(short)3] [i_2 + 3] [i_2 + 3] = ((/* implicit */signed char) (~(min((min((((/* implicit */long long int) var_0)), (var_5))), (max((var_2), (((/* implicit */long long int) var_8))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_12)), (var_3)))), (max((((/* implicit */unsigned long long int) var_7)), (var_10))))), (max((var_11), (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))));
            var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)101))))), (max((((/* implicit */long long int) var_8)), (1445366263193806423LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_17 = ((/* implicit */signed char) (-(201326592)));
            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_3))));
        }
        var_19 -= ((/* implicit */_Bool) max((((min((var_11), (((/* implicit */unsigned long long int) -1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_12)))) * (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    arr_25 [i_6] = ((/* implicit */int) (+(((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_0)))))))));
                    arr_26 [i_6] [i_7] [i_8] = ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) 1115336937))));
                    var_21 = ((/* implicit */int) var_3);
                    var_22 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) max((min((1115336949), (((/* implicit */int) (short)-13541)))), (((/* implicit */int) var_4))))), ((-(((var_1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_9 = 2; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((var_0), (var_0)))))), ((+(((/* implicit */int) var_7))))));
                var_24 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) -9054869330827884405LL)), (10690402930735961980ULL)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) (-(((min((((/* implicit */long long int) var_9)), (var_5))) * (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_12))))))))));
                            arr_38 [i_11] [i_11] [i_9] [i_11] = min(((-(((/* implicit */int) (signed char)-10)))), (((((/* implicit */_Bool) (unsigned short)40562)) ? (-1115336954) : (((/* implicit */int) (signed char)(-127 - 1))))));
                            arr_39 [i_11] [i_11] [i_11] [i_12] [i_12 + 3] [i_12] = ((/* implicit */unsigned short) min((min((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (var_3)))))), (((/* implicit */unsigned long long int) max(((-(493237803))), (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_7)))))))));
                            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (var_10))))))), (min((var_11), (((/* implicit */unsigned long long int) var_12))))));
                            var_27 = ((/* implicit */unsigned long long int) max((9223372036854775804LL), (((/* implicit */long long int) -1115336929))));
                        }
                    } 
                } 
                arr_40 [i_9] [i_9 + 2] [i_9 - 1] [i_9] |= ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))) : (min((var_11), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_3))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */int) var_6);
                arr_43 [(signed char)13] [i_14] [i_6] = ((/* implicit */signed char) (~(-3300347923452950902LL)));
                arr_44 [i_14] [i_6] [i_6] [i_14] = ((/* implicit */signed char) max((min((((/* implicit */int) (unsigned short)0)), (-752817458))), (((/* implicit */int) min((min((((/* implicit */short) var_7)), (var_0))), (((/* implicit */short) max((var_8), (var_8)))))))));
            }
            var_29 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (min((min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)186)))), (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_12)))))))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)32767))))));
            var_31 = ((/* implicit */unsigned int) min((1445366263193806431LL), (((/* implicit */long long int) (_Bool)1))));
        }
        arr_45 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) min((min((((/* implicit */unsigned char) var_1)), (var_7))), (min((var_7), (((/* implicit */unsigned char) var_4))))))), ((+(((/* implicit */int) var_0))))));
    }
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((min((min((var_10), (((/* implicit */unsigned long long int) var_4)))), (max((var_10), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */short) var_12)), (var_0))))))))))));
    var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned short) max((var_4), (var_12)))), (min((var_3), (((/* implicit */unsigned short) var_8))))))), (min((max((var_5), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
}
