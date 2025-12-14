/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43244
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) var_9);
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_12))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)39743)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (short)32)) ? (786432) : (((/* implicit */int) (short)-9651))))))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                        var_15 *= ((/* implicit */unsigned int) var_12);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) var_10);
                            var_17 += ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) (short)-1389)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_6))))))));
                            var_18 *= ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */_Bool) (unsigned short)2240)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1389)))))));
                            var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)17017));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_8))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))));
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) (short)27105));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20609))) / (var_10)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), ((-(arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [(short)4])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_13)), (var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_11 [i_0] [i_2] [i_7]))))))) : (max((var_10), (((/* implicit */unsigned int) max((var_0), (((/* implicit */short) var_4)))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-17309)) : (((/* implicit */int) (short)17309)))))))) ? (max((((((/* implicit */_Bool) 158648423U)) ? (10475866520840006583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39743))))), (((/* implicit */unsigned long long int) (signed char)120)))) : (((/* implicit */unsigned long long int) var_10))));
                        var_26 -= ((/* implicit */short) var_8);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_0] = ((/* implicit */signed char) ((_Bool) var_4));
                        arr_26 [i_0] [i_0] [18U] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-20733))))));
                        var_27 &= ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_0] = ((/* implicit */signed char) ((unsigned short) 3706676130U));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) ((long long int) (short)20733));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_9] [i_11]))));
                            var_30 = ((/* implicit */_Bool) (+(((unsigned int) var_9))));
                            var_31 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                        }
                        var_32 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-17309))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? ((+(((/* implicit */int) (short)-1950)))) : ((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) (unsigned short)64366)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))))));
                                arr_41 [i_0] [i_0] [i_1] [i_12] [i_12] [8ULL] [8ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)19141)) ? (11545964198025639973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                                var_34 = max((8837371766539157182ULL), (8191260727552329204ULL));
                                var_35 = ((/* implicit */unsigned short) arr_31 [i_13] [i_12] [(_Bool)0] [(_Bool)1] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))))))), (var_8)));
}
