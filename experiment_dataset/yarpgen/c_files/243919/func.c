/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243919
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((var_5) >> (((((/* implicit */int) var_4)) - (13522))))))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) ((short) var_2))) ? (max((var_2), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_12 += ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)12)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((signed char) var_8))))) + (((((/* implicit */unsigned int) 2147483635)) * (26U)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (5934269844384924672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_14 = ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            var_15 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)197)) ? (var_6) : (4294967289U))));
                            var_16 |= ((/* implicit */unsigned short) ((_Bool) (+(var_0))));
                            var_17 += ((/* implicit */unsigned int) (~(((((arr_8 [i_5] [i_2] [i_3]) + (2147483647))) << (((268435455U) - (268435455U)))))));
                            var_18 |= ((/* implicit */signed char) ((((arr_8 [i_4] [i_4] [i_4]) + (2147483647))) >> (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_3] [i_4]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) (-(var_1)));
                            arr_19 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_9), (((/* implicit */short) (signed char)35))))) + (((((/* implicit */int) (unsigned char)223)) - (((/* implicit */int) (signed char)7))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_2] [i_3] [i_2])), (var_5)))) : (((min((((/* implicit */unsigned long long int) 3036402646U)), (arr_12 [i_1] [i_2] [i_2] [i_4] [i_6]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-68)))))))));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) min(((signed char)72), ((signed char)-39)));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_3))))) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)19)) && (((/* implicit */_Bool) (unsigned char)53)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_2 + 3] [i_3] [i_3] [i_4] [i_7]))));
                            arr_24 [i_7] [i_2] [i_2 - 1] &= min((((/* implicit */unsigned char) (signed char)38)), ((unsigned char)47));
                        }
                        arr_25 [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3] [i_2]))))) << (((/* implicit */int) min((arr_15 [i_2] [i_2 + 3] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)20)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((signed char) 1171175541U));
                var_21 = var_10;
                var_22 = ((/* implicit */_Bool) (unsigned char)122);
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_34 [i_10] [12U] [i_1] |= ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) var_4)));
                            arr_35 [i_1] [i_9 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((983943977), (((/* implicit */int) ((unsigned char) 1401843009U)))))) ? (16156281927236338931ULL) : (var_2)));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_9))))) == (((/* implicit */int) (signed char)7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2])))))))) : (((((/* implicit */_Bool) max(((unsigned char)40), ((unsigned char)38)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)193)) | (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    var_24 = ((/* implicit */short) 4121485990U);
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_25 &= ((/* implicit */unsigned short) var_3);
                        var_26 = ((unsigned int) (+(var_1)));
                        var_27 = ((/* implicit */long long int) min(((((_Bool)1) ? (5626645780505854100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_2] [i_11 + 1] [i_11]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_37 [i_2] [i_11] [i_11] [i_11 - 1])))));
                    }
                }
            }
            var_28 += ((/* implicit */long long int) ((unsigned char) ((unsigned char) min((var_10), ((signed char)38)))));
        }
        arr_42 [i_1] |= ((/* implicit */int) (-(var_6)));
    }
}
