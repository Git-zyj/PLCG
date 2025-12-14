/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235637
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 + 1]))));
                            arr_11 [i_0 - 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_3 [i_2 + 1] [i_0 - 2] [i_1 + 1]) > (arr_3 [i_2 + 2] [i_0 + 1] [i_1 - 1]))) ? ((+(arr_3 [i_2 - 1] [i_0 - 3] [i_1 - 1]))) : (min((arr_3 [i_2 + 1] [i_0 - 4] [i_1 + 1]), (arr_3 [i_2 + 2] [i_0 - 1] [i_1 + 1])))));
                            var_12 = ((/* implicit */unsigned int) (+(min((max((((/* implicit */int) var_2)), (753979886))), (((/* implicit */int) var_2))))));
                            var_13 = ((/* implicit */short) var_2);
                            var_14 = (((+(arr_1 [i_0 - 2]))) * (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_10)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_19 [i_5] &= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) 4092690661U)), (max((var_10), (((/* implicit */long long int) var_8))))))));
                            var_15 = (((-(4092690661U))) > (((/* implicit */unsigned int) (~(1048320)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((_Bool) ((-1300460013985109186LL) > (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                arr_20 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((4092690661U) >> (((((/* implicit */int) (short)29896)) - (29872)))))) ? (-1300460013985109186LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1270930307082791166LL)))))));
                var_17 = ((/* implicit */_Bool) (-(((long long int) ((arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                arr_34 [i_7] [i_10] = ((/* implicit */unsigned int) (-(((long long int) ((unsigned short) arr_12 [i_10] [i_7] [i_7] [2])))));
                                var_18 = ((((/* implicit */_Bool) (~((-(-2669436524456191545LL)))))) ? (((/* implicit */int) ((((arr_7 [i_7] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) <= ((~(arr_30 [i_10] [i_7] [i_7] [12ULL])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29896)) ? (var_8) : (((/* implicit */int) arr_5 [i_9] [i_10])))))))));
                                var_19 = ((unsigned long long int) min((((/* implicit */long long int) var_7)), (var_0)));
                                arr_35 [i_7] [i_7] [i_10] [i_7] [i_10] [i_7] = ((/* implicit */_Bool) max((((int) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) arr_23 [i_6])), (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_36 [i_7] [i_10] = (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1300460013985109203LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)29896))))))));
                            }
                        } 
                    } 
                    arr_37 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) (!(var_3)));
                    arr_38 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_8] [i_6] [i_6] [i_6])) : (var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_4 [i_7] [i_8] [i_7]) * (((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) var_5)) ? (arr_39 [i_6] [7LL] [i_8] [i_6] [i_7]) : (((/* implicit */long long int) -598610850))))))) ? (max((((/* implicit */unsigned long long int) -1499019798)), (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_6] [i_6] [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                                arr_44 [i_7] = ((/* implicit */unsigned int) max(((+((~(598610849))))), (((/* implicit */int) arr_24 [i_6] [i_7] [i_8]))));
                                var_21 = ((((/* implicit */_Bool) arr_5 [i_12] [i_7])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_6] [i_8])) : (((/* implicit */int) arr_5 [i_12] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_7]))))));
                            }
                        } 
                    } 
                    arr_45 [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) 306936578653688963LL);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)29885)) : (((/* implicit */int) var_2)))))))) << (((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(max((((/* implicit */long long int) arr_1 [i_14 - 1])), (arr_49 [i_14 + 1] [i_14 - 2]))))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    for (unsigned short i_16 = 4; i_16 < 18; i_16 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) -1523481888)))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((short) min((3312225074042889499LL), (((/* implicit */long long int) -1523481888))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) ((-306936578653688933LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25660)))));
            }
        } 
    } 
}
