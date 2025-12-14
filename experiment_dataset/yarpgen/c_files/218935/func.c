/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218935
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (~(((unsigned int) (signed char)-12))));
            arr_5 [i_1 - 2] &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)50450))))));
        }
        arr_6 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(var_12)))))));
        var_14 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1479619592)) && (((/* implicit */_Bool) (short)10598)))))) : (((long long int) var_9))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) 4095)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((var_1) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_2)) ? (-753799779) : (((/* implicit */int) var_8)))))))))));
        arr_9 [(signed char)3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51177)))))))) : ((-(((/* implicit */int) ((signed char) var_12)))))));
        var_17 = ((/* implicit */short) ((long long int) (-(((unsigned int) (short)14118)))));
        var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26778)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) (_Bool)1))))));
    }
    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (signed char)-10);
                    var_21 = ((/* implicit */signed char) (unsigned short)41448);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_29 [i_7] [i_9] [i_7 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */signed char) 766400367);
                    }
                } 
            } 
        } 
        arr_30 [i_6 - 1] [i_6 + 1] = ((/* implicit */_Bool) var_6);
    }
    var_23 = ((/* implicit */int) var_3);
}
