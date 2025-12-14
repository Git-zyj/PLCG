/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200437
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(-1LL)));
                                arr_12 [i_0] [(short)2] [i_0] [(short)2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned int) -1LL)) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) << (((arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1]) - (474058567)))));
                                arr_13 [i_1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (short)-12415)))))))), ((~(max((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [9] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2])) + (((/* implicit */int) arr_0 [i_1 - 1])))))));
                                var_10 = ((/* implicit */unsigned int) ((((_Bool) ((unsigned short) arr_4 [i_0] [i_0] [i_2 - 2]))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_6)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (17253595121990253625ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 21; i_5 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)13869))))) == (4289029394U))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((int) arr_6 [i_0] [i_2 + 3] [i_2 + 3]))))) : (((/* implicit */int) ((unsigned short) ((unsigned char) arr_0 [i_0])))))))));
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) max((arr_16 [i_5] [i_5] [i_2 - 1] [i_0] [2U] [i_0]), (((/* implicit */unsigned short) var_4)))))), (((((/* implicit */int) arr_15 [(_Bool)1] [i_2 + 2] [(_Bool)1] [(_Bool)1])) << (((((/* implicit */int) arr_15 [14U] [i_2 - 2] [14U] [14U])) - (37385))))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        arr_19 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14504))) < (245760ULL)));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -3806977461131373361LL)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)20)))));
                            arr_25 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((_Bool) 1193148951719297993ULL));
                            arr_26 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) max((arr_23 [(unsigned short)9] [i_2] [i_1] [i_2 + 3] [i_7] [i_2 + 3]), (((/* implicit */int) ((short) min((((/* implicit */int) arr_16 [18U] [i_2] [i_2 - 2] [18U] [i_7] [i_1 + 2])), (706351574)))))));
                            arr_27 [i_1] [12U] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) 1193148951719297964ULL);
                            arr_28 [(signed char)18] [i_1 + 2] [i_1] [i_0] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_7] [i_1] [(_Bool)1])) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) min((arr_16 [i_7] [i_7] [i_6 + 1] [i_6] [i_2 + 2] [i_2 - 2]), (((/* implicit */unsigned short) var_0)))))));
                        }
                        arr_29 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        arr_30 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_17 [i_1])) << (((1193148951719297990ULL) - (1193148951719297990ULL)))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 14136444407981129872ULL))));
                    }
                    arr_31 [i_0] [i_1] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -706351574)))))) < (((/* implicit */int) var_5))));
                }
                for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        arr_36 [i_1] [i_1] [i_0] [i_1 - 1] = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned char)216))))));
                        arr_37 [i_1] [i_1] [i_8] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_8] [i_9 - 1] [i_9])) || (((/* implicit */_Bool) var_7)))) ? (min((min((((/* implicit */unsigned int) -706351575)), (4194294069U))), (((/* implicit */unsigned int) min((arr_17 [i_1]), (((/* implicit */unsigned char) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_38 [i_1] [i_1] = ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_1] = (~(-1573276985));
                                var_14 -= ((((/* implicit */_Bool) arr_3 [0LL] [i_10] [0LL])) ? (min((max((4059017862283750242ULL), (((/* implicit */unsigned long long int) arr_43 [(unsigned char)0] [(unsigned char)0])))), (((/* implicit */unsigned long long int) arr_39 [i_1 - 1] [i_1] [i_1] [i_1 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1573276985)) ? (((/* implicit */int) arr_18 [i_8] [(_Bool)1] [i_8])) : (((/* implicit */int) (signed char)17))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (short)-30940))));
                            }
                        } 
                    } 
                    arr_45 [i_8] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) (short)-30940))));
                }
                for (signed char i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_1] [i_0] [i_1 + 2] [i_1])), (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)242))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43684))) % (arr_32 [i_0] [i_0] [i_0]))))))));
                    arr_49 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)33))))), (((27LL) + (((/* implicit */long long int) 3885008594U))))));
                    var_17 -= ((/* implicit */unsigned char) 245751ULL);
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 4; i_13 < 23; i_13 += 1) 
                    {
                        arr_53 [i_1] [i_1] [i_1 - 1] [i_12] [i_12] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [17U] [i_0]);
                        arr_54 [i_1] [i_1] [i_12] [i_13] = ((/* implicit */signed char) ((_Bool) var_8));
                    }
                    arr_55 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) -1);
                }
                arr_56 [i_0] [i_1] = ((/* implicit */_Bool) (+(var_8)));
                var_18 = ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
    var_19 += ((/* implicit */_Bool) var_9);
}
