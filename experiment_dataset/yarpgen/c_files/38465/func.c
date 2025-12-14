/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38465
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_3 [(unsigned char)8] &= ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0 - 1]));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_11 = arr_7 [i_0] [i_1];
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7644038033905496028LL)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1523002116) : (1523002115))))));
                    }
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1])) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1525444562)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)59))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                    arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1523002136)) ? (((unsigned int) var_2)) : (((((/* implicit */_Bool) 1523002122)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 11; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_18 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (~(((arr_17 [i_5] [i_5] [i_4] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1758)))))));
                    var_14 = ((/* implicit */signed char) ((-1523002135) + (((((/* implicit */_Bool) -1523002116)) ? (((/* implicit */int) (signed char)-32)) : (-1523002119)))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_6 [i_0])));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40101))) >= (arr_6 [i_4])))) : (((((/* implicit */int) (unsigned short)40109)) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 4; i_7 < 14; i_7 += 1) /* same iter space */
        {
            arr_23 [i_6] [i_7] = ((/* implicit */signed char) ((_Bool) -548926683));
            var_18 = 1206465512;
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 1523002146)) ? (((/* implicit */long long int) 146837469)) : (-6243176601376228146LL)));
                var_20 = ((unsigned int) arr_26 [i_6] [i_7 - 4] [i_8]);
                arr_27 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1523002151)))) ? (((/* implicit */long long int) -1523002136)) : (((((/* implicit */_Bool) (unsigned char)3)) ? (arr_19 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                arr_28 [i_8] [i_7 - 2] [i_6] = ((((/* implicit */_Bool) arr_20 [i_7])) ? ((+(var_3))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (1523002132)))));
                var_21 = ((/* implicit */unsigned char) (+(3262350991100788033LL)));
            }
        }
        for (unsigned char i_9 = 4; i_9 < 14; i_9 += 1) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned short) -3262350991100788019LL);
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
            {
                for (unsigned char i_11 = 2; i_11 < 16; i_11 += 2) 
                {
                    {
                        arr_37 [i_6] [i_9] [i_10] = ((((/* implicit */int) arr_29 [i_9] [i_9])) < (-1523002148));
                        arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_6] [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_35 [i_6] [i_9] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
            var_23 = arr_34 [i_6] [i_6] [i_6] [i_6] [i_6];
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 3; i_14 < 15; i_14 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 527190539U)) ? ((-(2970966600319173680LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))))));
                        var_25 |= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (signed char)-46)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 2; i_15 < 17; i_15 += 2) 
                        {
                            var_26 -= ((/* implicit */_Bool) (unsigned char)255);
                            arr_48 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1523002150)) ? (1394717053) : (-1523002150)))) ? (((/* implicit */int) (unsigned short)39967)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3U))))));
                            arr_49 [i_13] [i_12] [i_13] = ((/* implicit */unsigned short) ((((var_9) / (4294967272U))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
                            var_27 = ((/* implicit */unsigned int) ((signed char) var_4));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (3262350991100788018LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
                        }
                        for (int i_16 = 3; i_16 < 16; i_16 += 4) 
                        {
                            arr_52 [i_13] = ((/* implicit */int) (unsigned short)24884);
                            var_29 = ((/* implicit */unsigned char) arr_22 [i_6] [i_6]);
                            arr_53 [(unsigned char)10] [i_12] [i_12] [i_12] [i_12 - 1] [i_12] |= ((/* implicit */unsigned int) 1050654370);
                        }
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((1523002116) - (((/* implicit */int) ((signed char) var_2))))))));
                    }
                    var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_32 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_12])) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_20 [i_6]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_17 = 3; i_17 < 10; i_17 += 2) 
    {
        arr_58 [i_17] = (+(((/* implicit */int) ((((/* implicit */int) arr_44 [i_17])) > (((/* implicit */int) (unsigned short)43757))))));
        var_33 -= ((/* implicit */unsigned short) ((1571161990) ^ ((+(((/* implicit */int) var_10))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_18 = 3; i_18 < 12; i_18 += 1) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24885)) + (((/* implicit */int) arr_24 [i_18]))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_19 = 3; i_19 < 12; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_20 = 2; i_20 < 10; i_20 += 1) 
        {
            for (int i_21 = 3; i_21 < 11; i_21 += 2) 
            {
                {
                    arr_69 [i_19] [i_20 - 2] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) min((8388607U), (((/* implicit */unsigned int) 719470941))))), (min((((/* implicit */long long int) (unsigned short)4095)), (arr_65 [i_19] [i_19]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59210)))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            {
                                arr_77 [i_19] [i_22] = ((/* implicit */long long int) arr_11 [i_19 - 1] [i_20] [i_21] [i_19 - 1] [i_23 + 1]);
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (((((/* implicit */int) arr_35 [i_19] [i_19] [i_19] [i_22])) - (((/* implicit */int) (unsigned short)24865)))) : (((/* implicit */int) (unsigned char)247))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3319146996258834008LL)) ? (((/* implicit */int) (unsigned short)58336)) : (((/* implicit */int) (unsigned short)41378))))) ? (((/* implicit */int) min(((unsigned short)40673), ((unsigned short)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_19] [i_20] [i_20] [i_20] [i_23])))))) : (((((/* implicit */_Bool) min((arr_20 [i_20]), (((/* implicit */long long int) arr_50 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (((/* implicit */int) (signed char)-57)) : (max((((/* implicit */int) var_10)), (1523002116)))))));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(((long long int) arr_32 [i_20 + 1])))))));
                                var_37 = ((/* implicit */unsigned int) arr_42 [i_19] [i_19] [i_19]);
                                var_38 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)57)) ? (min((((/* implicit */int) arr_74 [i_21 - 1])), (-1358859839))) : (((((/* implicit */int) (unsigned short)24879)) / (((/* implicit */int) (unsigned short)59060))))))));
                            }
                        } 
                    } 
                    var_39 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_24 = 0; i_24 < 13; i_24 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_68 [i_24] [i_24] [i_19])) / (var_8))) * (1099455457)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((min((((/* implicit */unsigned int) 939524096)), (524287U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)27)) - (((/* implicit */int) (unsigned short)40654)))))))));
            arr_81 [i_19] = ((/* implicit */unsigned int) (unsigned char)136);
            var_41 = ((/* implicit */int) min((var_41), ((+(((/* implicit */int) (unsigned char)27))))));
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_26 = 1; i_26 < 12; i_26 += 1) 
            {
                for (int i_27 = 0; i_27 < 13; i_27 += 1) 
                {
                    {
                        arr_91 [i_19] [i_26] [i_25] [i_25] [i_25] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2037009252) / (((/* implicit */int) (unsigned char)69))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [i_19] [i_27]))))) : (((var_2) ? (arr_39 [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24858)))))));
                        arr_92 [i_19] [i_25] [i_26] [i_25] [i_19] = ((/* implicit */unsigned int) (unsigned short)32528);
                        arr_93 [i_25] [i_19] [i_26] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1571161991)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)5797))));
                    }
                } 
            } 
            var_42 = ((/* implicit */signed char) arr_36 [i_25] [i_19] [i_19] [i_19]);
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) >= (arr_70 [i_19] [i_25] [i_19]))))) >= (((long long int) (unsigned char)162))));
        }
        for (unsigned short i_28 = 1; i_28 < 12; i_28 += 2) 
        {
            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) (!(((/* implicit */_Bool) max((min((arr_63 [i_19]), (((/* implicit */int) arr_75 [i_19] [i_19] [i_19] [i_19 - 2] [i_28] [i_28])))), ((+(((/* implicit */int) (unsigned short)5797))))))))))));
            var_45 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59739)) <= (666361963))))) > (2488769377755576717ULL)))) % (((/* implicit */int) var_7))));
            var_46 = ((/* implicit */unsigned char) ((signed char) (signed char)123));
        }
        /* vectorizable */
        for (unsigned short i_29 = 0; i_29 < 13; i_29 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_30 = 3; i_30 < 12; i_30 += 4) 
            {
                for (signed char i_31 = 0; i_31 < 13; i_31 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) || (((/* implicit */_Bool) -6874073878993674585LL))));
                        var_48 = ((/* implicit */long long int) (-(1523002131)));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_31] [i_29] [i_29])) : (1501587646)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(var_0)))));
                        var_50 -= ((/* implicit */long long int) ((int) (_Bool)1));
                    }
                } 
            } 
            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) 1099455436))));
        }
        var_52 ^= ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned int) arr_78 [i_19])), (arr_87 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_19 - 3]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_78 [i_19]))))), (min(((unsigned short)5817), (((/* implicit */unsigned short) arr_71 [i_19 - 3] [i_19 - 3]))))))))));
    }
}
