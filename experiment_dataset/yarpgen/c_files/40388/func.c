/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40388
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((_Bool) var_7));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((_Bool) var_9)))));
                    var_22 = ((((/* implicit */_Bool) ((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_9)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7022)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 7509823155579568463ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((short) arr_8 [i_0] [i_2]));
                    var_25 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) - (10936920918129983152ULL))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned long long int) -982955934368117422LL);
        arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)12] [(signed char)12])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) : (arr_0 [i_0])));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) 10936920918129983152ULL);
    }
    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        var_26 = arr_7 [14ULL] [(unsigned char)10];
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_27 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)46304)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7022)) == (((/* implicit */int) var_6)))))) : (min((((/* implicit */unsigned int) var_4)), (696820952U)))))) && (((/* implicit */_Bool) arr_1 [(unsigned short)3])));
            arr_23 [i_6] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((arr_11 [i_5] [8ULL] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_12 [i_6]))))) : (((((/* implicit */_Bool) 3868482128U)) ? (((/* implicit */unsigned long long int) var_18)) : (15910976500611415640ULL))))), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_5]))));
            arr_24 [i_6] = var_18;
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_28 ^= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_22 [4ULL]), (((/* implicit */unsigned short) arr_12 [i_5 + 1]))))) ^ (((/* implicit */int) (unsigned short)11902))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [12] [(_Bool)1])) ? (((/* implicit */int) arr_25 [i_5] [i_5])) : (((/* implicit */int) arr_7 [4ULL] [i_7]))))) ? (1056964608U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)181), (((/* implicit */unsigned char) arr_7 [6U] [6U]))))))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [(unsigned short)4]))) : ((((!(((/* implicit */_Bool) 10922402907940874616ULL)))) ? (((((/* implicit */_Bool) -794355632)) ? (7509823155579568464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60887))))) : (((/* implicit */unsigned long long int) max((3238002687U), (((/* implicit */unsigned int) (signed char)-3)))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            arr_40 [i_5] [i_8] [i_9 - 1] [i_10] [9] [(signed char)9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (arr_18 [i_5 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 + 3])) ? (arr_18 [i_5 + 3]) : (arr_18 [i_5 + 2])))));
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7717849147784156613ULL), (((/* implicit */unsigned long long int) (signed char)54))))) ? (1878059503257724365ULL) : (((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((/* implicit */unsigned long long int) 0)) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [4U])))))));
                            arr_41 [i_8] [(short)5] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(arr_9 [i_8] [i_9 - 1] [(_Bool)1] [2ULL])))) ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7524341165768677000ULL), (((/* implicit */unsigned long long int) 1958765058))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [(signed char)11]))) <= (1407179042U)))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) 11049917247677793042ULL);
                var_32 = ((/* implicit */long long int) max((((arr_11 [i_5] [i_8] [i_8] [i_5] [i_8] [i_8]) / (arr_28 [i_8 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_4)))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) arr_4 [(unsigned short)0] [i_8] [i_9 + 1])))))));
                arr_42 [i_5] [i_8 - 1] [(unsigned short)5] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(arr_27 [i_5] [i_5] [i_5]))), (((/* implicit */int) var_17))))) ? (arr_3 [8LL] [(signed char)10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5478000447928601225ULL)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (signed char)68))))) ? (((((/* implicit */_Bool) (unsigned short)7)) ? (6546200279319930162LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) : (((/* implicit */long long int) (~(arr_27 [i_9 + 2] [15] [i_5])))))))));
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)98)), (268433408U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) arr_26 [i_8] [i_5 + 2])) : (((/* implicit */int) (unsigned short)4648))))) : (min((3746930746U), (997586190U)))))) ? (((/* implicit */int) max((arr_25 [i_5 + 2] [i_8 - 1]), (arr_25 [i_5 + 1] [i_8 - 1])))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [13ULL] [(_Bool)1] [i_9 + 1] [13ULL] [(_Bool)1]))))), ((~(((/* implicit */int) var_10)))))));
            }
            var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) 3297381106U))), (arr_28 [i_5 + 3])))) * (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 997586190U)) < (11049917247677793041ULL)))), (((((/* implicit */_Bool) arr_3 [(signed char)8] [(signed char)8])) ? (((/* implicit */long long int) 3297381105U)) : (-6546200279319930163LL)))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(arr_32 [i_5] [i_5] [i_5 + 3] [(unsigned short)5]))))));
            var_36 += ((/* implicit */unsigned long long int) (signed char)31);
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) -5208546372735403107LL))) : (((((/* implicit */_Bool) arr_48 [16ULL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_49 [i_13]))))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            var_38 = ((/* implicit */unsigned long long int) arr_47 [i_13]);
            var_39 = ((((/* implicit */_Bool) ((short) (unsigned char)70))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_48 [i_13])));
            var_40 |= ((/* implicit */signed char) ((arr_49 [i_13]) ? (((/* implicit */int) arr_49 [i_13])) : (((/* implicit */int) arr_49 [i_14]))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_41 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_47 [(short)8])) ? (var_5) : (268433408U))) / (var_5)));
            var_42 = ((/* implicit */unsigned char) var_6);
            arr_56 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (signed char)-44);
        }
        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_13])) * (((/* implicit */int) arr_52 [i_13] [i_13]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_55 [i_13]) : (arr_55 [19U]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_13])))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                {
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((arr_51 [i_13] [i_16] [7U]) >> (((((((/* implicit */_Bool) 1056964608U)) ? (arr_55 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (2253552354U))))))));
                    var_45 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1186458113)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4150279829U)))) >= (((((/* implicit */_Bool) arr_61 [i_13] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_62 [i_17] [i_13] [i_13])))));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 20; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 20; i_19 += 3) 
                        {
                            {
                                arr_69 [i_13] [i_13] [2] [2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)31)) | (((/* implicit */int) var_3))));
                                arr_70 [i_13] [i_13] [i_17] [i_13] [i_13] [i_13] = ((/* implicit */signed char) arr_52 [i_13] [i_13]);
                                var_46 -= ((/* implicit */signed char) ((unsigned short) ((int) var_13)));
                            }
                        } 
                    } 
                    arr_71 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned int) ((signed char) arr_68 [(signed char)5] [i_16] [i_16] [5LL] [21] [i_17] [i_16])));
                }
            } 
        } 
    }
    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
    {
        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) arr_54 [(signed char)22] [18LL] [(signed char)22]))));
        var_48 = ((/* implicit */long long int) max((((/* implicit */short) var_3)), (var_7)));
        /* LoopNest 3 */
        for (unsigned int i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) 
            {
                for (unsigned int i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    {
                        arr_81 [i_20] [i_20] [i_22] [i_20] = ((/* implicit */long long int) arr_80 [i_20] [i_20] [i_20] [(short)7] [i_23]);
                        var_49 = (~(max((((/* implicit */unsigned long long int) arr_64 [(short)2] [(short)2] [i_20] [i_23])), (arr_66 [i_23] [i_22] [i_20] [i_20]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
    {
        var_50 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [(unsigned char)12])) || (((/* implicit */_Bool) arr_58 [i_24] [i_24] [i_24]))));
        var_51 = ((arr_54 [i_24] [i_24] [i_24]) & (arr_54 [i_24] [i_24] [i_24]));
    }
}
