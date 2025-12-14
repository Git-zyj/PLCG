/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226315
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)43)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35724)))));
                arr_9 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)15374)) <= (((/* implicit */int) (unsigned char)23))));
            }
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned char)210);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (unsigned short)18306))));
                            var_18 |= ((/* implicit */unsigned char) 1488204876U);
                            var_19 = ((/* implicit */unsigned int) var_12);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 524272U)) >= (12189694105290684387ULL)));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-15375)) * (((/* implicit */int) (short)12618)))))));
                        var_22 += ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 160032538U)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) var_5)))))));
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (short)12127))) <= ((~(var_12)))))), (max((((/* implicit */unsigned int) (signed char)-121)), ((-(524268U)))))));
        var_26 = ((/* implicit */unsigned char) (signed char)-40);
        var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(2835870195U)))) ? (min((var_9), (((/* implicit */unsigned long long int) (signed char)46)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)18)))))));
        var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8624272268882520085ULL)))) ? ((((_Bool)1) ? (4294443024U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (117440512U))), (((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)4475))))) < (((/* implicit */int) ((short) (signed char)-1))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                {
                    var_29 -= ((((/* implicit */_Bool) ((unsigned int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)154)))))) ? (((/* implicit */unsigned long long int) max((min((1995181297U), (((/* implicit */unsigned int) 1486401864)))), (min((((/* implicit */unsigned int) (short)4417)), (var_15)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)95)))))) * (var_9))));
                    arr_41 [i_11] = ((/* implicit */unsigned int) ((33554430U) >= (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) ((2115098137U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)15374)))))))))));
                    var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)230))))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (2179869154U)))) * (max((17614446237392992319ULL), (((/* implicit */unsigned long long int) (unsigned short)3734)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
}
