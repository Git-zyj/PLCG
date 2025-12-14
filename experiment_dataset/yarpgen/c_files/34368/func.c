/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34368
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = var_2;
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_17 += ((signed char) (unsigned short)12);
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (signed char)-1))));
            arr_5 [i_1] [i_1] = (((_Bool)1) ? (15994937941621014154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)1)) == (((/* implicit */int) (signed char)-2)))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                arr_8 [i_1] [i_1] [i_1] = ((short) (signed char)10);
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_0)))));
                    arr_12 [9ULL] [i_1] [i_2 + 2] [7ULL] = ((unsigned long long int) var_11);
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) 720633938)) : (((4001508671U) >> (((/* implicit */int) (signed char)13))))));
                    var_20 = ((/* implicit */unsigned short) ((signed char) var_2));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */int) (short)21118)) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) == (var_12)))) : (((/* implicit */int) ((_Bool) 1ULL)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 293458625U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (4001508675U)));
                        var_23 = ((/* implicit */_Bool) (unsigned short)17);
                    }
                    var_24 = ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) (signed char)2)));
                }
            }
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */_Bool) ((var_5) ? (((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-2)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((short) (unsigned short)11878));
                        var_27 -= (signed char)1;
                        var_28 += ((/* implicit */signed char) (((~(4672347662918233790ULL))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (3894782096U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_29 = ((unsigned short) ((((/* implicit */_Bool) 275627863821256588ULL)) && (((/* implicit */_Bool) (signed char)1))));
            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3894782107U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)119))))) : (((unsigned int) (_Bool)1)))))));
            arr_31 [i_0] [i_10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)41)) > (((/* implicit */int) var_14))));
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)47))));
        }
        arr_32 [(signed char)2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (signed char i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        var_33 -= ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_3)))));
        arr_35 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) (unsigned short)64482))));
    }
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10879))));
        var_35 *= ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_10)));
        /* LoopSeq 1 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) min((400185206U), (((/* implicit */unsigned int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))))) : (min(((~(4294967271U))), (3894782096U)))));
            arr_40 [i_13] [i_13 - 1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) (_Bool)1))))))));
            arr_41 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_15);
        }
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (((!(((((/* implicit */int) (unsigned char)143)) > (((/* implicit */int) (signed char)-2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (((unsigned int) 524287ULL)))))));
        var_39 -= ((/* implicit */unsigned long long int) (signed char)-51);
    }
    var_40 ^= ((((_Bool) ((unsigned long long int) (unsigned char)255))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -720633948)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (4294967277U)))));
    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_14)))))));
}
