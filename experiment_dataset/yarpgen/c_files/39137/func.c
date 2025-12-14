/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39137
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
    var_17 = ((/* implicit */int) min((var_17), ((-((+(((/* implicit */int) ((unsigned short) var_3)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) arr_2 [i_2])) : (-741327635)))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32756))) + (arr_3 [i_2] [i_1])));
            }
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((int) var_10))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [i_0])) : (((((((/* implicit */int) (signed char)-77)) + (2147483647))) >> (((-1) + (8))))))))));
            }
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_4 + 2] [i_1] [i_0] [i_0]))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10)))))))));
                arr_15 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [11] [i_4 + 2])) : ((-(arr_6 [i_0] [(signed char)9] [i_1] [i_4])))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) (unsigned short)37657);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(arr_11 [i_0] [12] [i_5 + 3]))))));
                    }
                } 
            } 
            var_25 = (-(((/* implicit */int) (short)-4430)));
            arr_23 [i_5] = ((/* implicit */int) (unsigned short)37098);
        }
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) (signed char)93))));
            arr_26 [i_8] [i_8 - 2] [i_8] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_8 - 1] [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 4) 
        {
            arr_29 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) | (((/* implicit */int) (signed char)84))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(var_1)))));
            var_27 = arr_2 [i_0];
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 4; i_11 < 11; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        arr_37 [i_11] [i_10] [4U] [i_12] = ((/* implicit */signed char) ((int) (signed char)25));
                        var_28 = ((((/* implicit */_Bool) arr_19 [i_11 - 4] [i_11 - 3] [i_11 - 3] [i_11 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)));
                        var_29 = (+(((/* implicit */int) var_13)));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) (unsigned char)198);
        }
    }
    for (unsigned short i_13 = 2; i_13 < 15; i_13 += 2) 
    {
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (((unsigned int) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (short)32761))))))))));
        arr_42 [i_13] = ((/* implicit */signed char) ((((int) var_6)) >= (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)127)) : ((-(((/* implicit */int) (short)12837))))))));
    }
}
