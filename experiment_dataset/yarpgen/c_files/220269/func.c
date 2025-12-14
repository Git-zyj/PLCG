/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220269
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
    var_20 = ((/* implicit */unsigned int) ((long long int) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_7 [4U] &= ((/* implicit */unsigned char) (-(((((/* implicit */long long int) -1216502767)) - (-6726467009533535590LL)))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_19)) + (23))))));
            var_21 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) var_6)));
            arr_9 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) % (var_1))) != ((~(var_1)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_16))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(2305843008676823040ULL))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) var_10)) < (var_9)))));
                        arr_20 [i_0] [i_3] [(unsigned char)8] [i_0] = ((/* implicit */short) var_1);
                        var_25 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_24 [i_0] [i_2 - 2] [i_5] = ((/* implicit */unsigned short) ((var_11) >> ((((+(var_9))) - (12437780273155513316ULL)))));
                arr_25 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(var_1)))) | (var_16)));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) var_19)))))))));
            }
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_29 [i_6] = ((/* implicit */signed char) (-(((long long int) var_12))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        {
                            var_27 = (!(((/* implicit */_Bool) (-(576390383559245824LL)))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_15))) >> (((((long long int) var_4)) - (42645LL))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    arr_36 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_15))))));
                    var_29 = ((/* implicit */unsigned int) var_17);
                    var_30 -= ((/* implicit */long long int) var_17);
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) ((unsigned char) var_14));
                    var_32 = ((unsigned int) 376282408583133585ULL);
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_11 = 4; i_11 < 11; i_11 += 2) 
        {
            var_33 = ((/* implicit */unsigned int) ((((int) var_2)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (var_9))))));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 8; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        var_34 += ((/* implicit */long long int) (~((+(((/* implicit */int) var_19))))));
                        arr_47 [i_0] [i_11] [i_12 + 1] [i_12 + 1] = (!((!(((/* implicit */_Bool) var_13)))));
                        var_35 += ((/* implicit */long long int) ((short) (unsigned char)10));
                    }
                } 
            } 
            arr_48 [i_0] [i_0] = ((/* implicit */signed char) (-(576390383559245824LL)));
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_36 &= ((/* implicit */unsigned long long int) var_17);
        var_37 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
        arr_52 [i_14] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-101))))));
        arr_53 [i_14] = ((/* implicit */signed char) (!(var_12)));
        var_38 = ((/* implicit */long long int) (-(((int) var_16))));
    }
}
